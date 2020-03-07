#include "Person.h"

Person::Person(): name(""), address(""){
}

ostream &print(ostream &threadOut, Person &obj){
    threadOut << "Person name:\t";
    threadOut << obj.name << endl;
    threadOut << "Person address:\t";
    threadOut << obj.address << endl;
    return threadOut;
}

istream &read(istream &threadIn, string &str){
    getline(threadIn, str);
    return threadIn;
}
