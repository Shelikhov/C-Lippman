#ifndef FOLDER_H
#define FOLDER_H

#include"message.h"
#include<set>
#include<string>
#include<iostream>

using namespace std;

class Message;

class Folder{
public:
    friend class Message;
    Folder(string str);
    void addMsg(Message *);//Adds message to current folder.
    void remvMesg(Message *);//Remove message from current folder.
    void printAllMsg();//To show all messages in current folder.
private:
    string name;//Name of current folder.
    set<Message *> messages;
};

#endif
