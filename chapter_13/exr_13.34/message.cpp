#include "message.h"

Message::Message(string str): content(str){
}

Message::Message(const Message &obj): content(obj.content), folders(obj.folders){
    addMsgToFolders();
}

Message &Message::operator=(Message &obj){
    remvMsgFromFolders();
    content = obj.content;
    folders = obj.folders;
    addMsgToFolders();
    return *this;
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
    cout << "Message " << this->content << "exists in folders:\n";
    for(Folder *el : folders)
        cout << el->name << "\n";
}
