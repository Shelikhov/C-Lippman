#include<iostream>
#include<string>
#include"folder.h"
#include"message.h"
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    Message msg1("message1"), msg2("message2"), msg3("message3"), msg4("message4");
    Folder fld1("folder1");
    Folder fld2("folder2");
    msg1.save(fld1);
    msg2.save(fld2);
    msg3.save(fld2);
    msg4.save(fld2);

    fld1.printAllMsg();
    fld2.printAllMsg();
    cout << "*****************\n";
    msg1.printAllFolders();
    msg2.printAllFolders();
    msg3.printAllFolders();
    msg4.printAllFolders();
}
