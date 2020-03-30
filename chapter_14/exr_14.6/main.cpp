#include<iostream>
#include<string>
#include"folder.h"
#include"message.h"

using namespace std;
ostream &operator<<(ostream &, Message &);

int main(){
    Message msg1("mes1"), msg2("mes2");
    Folder fld1("folder1"), fld2("folder2");
    msg1.save(fld1);
    msg2.save(fld2);
    cout << msg1 << msg2;
    if(msg1 != msg2)
        cout << "Contents in the msg1 and msg2 are equal!\n";
    else
        cout << "Contents in the msg1 and msg2 are different!\n";
}

ostream &operator<<(ostream &threadOut, Message &mes){
    threadOut << "Contant of message:\n" << mes.content << "\nFolders where the message exists:\n";
    for(Folder *el : mes.folders)
        threadOut << el->name << "\t";
    threadOut << "\n";
    return threadOut;
}
