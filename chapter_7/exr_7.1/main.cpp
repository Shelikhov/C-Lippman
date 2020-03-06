#include<iostream>
#include"Sales_data.h"

using namespace std;

void read(istream & threadIn, Sales_data &obj);
void print(ostream &threadOut, Sales_data &obj);

int main(){
    Sales_data book1, book2;
    
    //To create twj books.
    cout << "Enter first book name:\n";
    read(cin, book1);
    cout << "Enter second book name:\n";
    read(cin, book2);

    //If they similar, to combine and print out them.
    if(book1.isbn() == book2.isbn()){
        book1.combine(book2);
        print(cout, book1);
    }else{
        print(cout, book1);
        print(cout, book2);
    }
}

void read(istream & threadIn, Sales_data &obj){
    string name;
    threadIn >> name;
    obj.add(name);
    return;
}

void print(ostream &threadOut, Sales_data &obj){
    threadOut << "Book name:\t" << obj.isbn() << "\n" << "Count:\t" << obj.cnt() << endl;
    return;
}
