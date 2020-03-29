#include<iostream>
#include<string>
#include"folder.h"
#include"message.h"
#include<vector>
#include<algorithm>

using namespace std;

Message fun(Folder &);

int main(){
    Message msg1("message1"), msg2("message2"), msg3("message3");
    Folder fld1("folder1");
    Folder fld2("folder2");
    msg1.save(fld1);
    msg2.save(fld2);
    msg3.save(fld2);

    Message msg5("message5");
    msg5.save(fld1);
    msg5 = fun(fld2);

    fld1.printAllMsg();
    fld2.printAllMsg();
    cout << "*****************\n";
    msg1.printAllFolders();
    msg2.printAllFolders();
    msg3.printAllFolders();
    msg5.printAllFolders();
}

Message fun(Folder &fold){
    Message mesTest("test");
    mesTest.save(fold);
    return mesTest;
}
