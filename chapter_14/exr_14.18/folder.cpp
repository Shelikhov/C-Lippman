#include "folder.h"

Folder::Folder(string str): name(str){
}

void Folder::addMsg(Message *mesg){
    messages.insert(mesg);
}

void Folder::remvMesg(Message *mesg){
    messages.erase(mesg);
}

void Folder::printAllMsg(){
    cout << "Messages in the folder " << this->name << ":\n";
    for(Message *el : messages)
        cout << el->content << "\n";
}
