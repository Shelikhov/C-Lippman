#include<iostream>
#include<string>
#include"folder.h"
#include"message.h"

using namespace std;
ostream &operator<<(ostream &, Message &);
istream &operator>>(istream &, Message &);

int main(){
    Message msg1("test test"), msg2("test");
    if(msg1 < msg2)
        cout << "First message less than second message!\n";
    else
        cout << "First message bigger than second message!\n";
}

ostream &operator<<(ostream &threadOut, Message &mes){
    threadOut << "Contant of message:\n" << mes.content << "\nFolders where the message exists:\n";
    for(Folder *el : mes.folders)
        threadOut << el->name << "\t";
    threadOut << "\n";
    return threadOut;
}

istream &operator>>(istream &threadIn, Message &mes){
    threadIn >> mes.content;
    if(!threadIn)
        mes = Message();
    return threadIn;
}
