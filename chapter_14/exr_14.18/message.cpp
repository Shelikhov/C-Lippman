#include "message.h"

Message::Message(string str): content(str){
}

Message::Message(const Message &obj): content(obj.content), folders(obj.folders){
    addMsgToFolders();
}

Message &Message::operator=(const Message &obj){
    remvMsgFromFolders();
    content = obj.content;
    folders = obj.folders;
    addMsgToFolders();
    return *this;
}

Message::Message(Message &&obj): content(move(obj.content)){
    folders = obj.folders;
    for(Folder *el : folders){
        el->remvMesg(&obj);
        el->addMsg(this);
    }
    obj.folders.clear();
}

Message &Message::operator=(Message &&obj){
    if(this != &obj){
        remvMsgFromFolders();
        content = move(obj.content);
        folders = move(obj.folders);
        for(Folder *el : folders){
            el->remvMesg(&obj);
            el->addMsg(this);
        }
        obj.folders.clear();
    }
    return *this;
}

bool Message::operator==(const Message &obj){
    return this->content == obj.content ? true : false;
}

bool Message::operator!=(const Message &obj){
    return this->content != obj.content ? true : false;
}

bool Message::operator<(const Message &obj){
    return this->content  < obj.content ? true : false;
}

bool Message::operator>(const Message &obj){
    return this->content  > obj.content ? true : false;
}

Message::~Message(){
    remvMsgFromFolders();
}

void Message::save(Folder &fold){
    folders.insert(&fold);
    fold.addMsg(this);
}

void Message::remove(Folder &fold){
    folders.erase(&fold);
    fold.remvMesg(this);
}

void Message::addMsgToFolders(){
    for(Folder *el : folders)
        el->addMsg(this);
}

void Message::remvMsgFromFolders(){
    for(Folder *el : folders)
        el->remvMesg(this);
}

void Message::printAllFolders(){
    cout << "Message " << this->content << " exists in folders:\n";
    for(Folder *el : folders)
        cout << el->name << "\n";
}
