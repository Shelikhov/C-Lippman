#ifndef MESSAGE_H
#define MESSAGE_H

#include<string>
#include<set>
#include"folder.h"

using namespace std;
class Folder;

class Message{
public:
    friend ostream &operator<<(ostream &, Message &);
    friend istream &operator>>(istream &, Message &);
    friend class Folder;
    Message() = default;
    Message(string str);
    Message(const Message &);
    Message &operator=(const Message &);
    Message(Message &&);//Move constructor.
    Message &operator=(Message &&);//Move assignment operator.
    bool operator==(const Message &);
    bool operator!=(const Message &);
    //ostream &operator<<(ostream &, const Message &);
    ~Message();
    void save(Folder &);//To add current message to certain folder.
    void remove(Folder &);//To delete current message from certain folder.
    void printAllFolders();//To show all folder in which this message.
private:
    string content;//Content of this message.
    set<Folder *> folders;
    void addMsgToFolders();//For copy constructor and operator=.
    void remvMsgFromFolders();//For operator= and destructor.
};

#endif
