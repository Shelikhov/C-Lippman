#include<iostream>
#include<string>
#include"Sales_data.h"
#include"Print.h"

using namespace std;

int main(){
    Sales_data book1;
    Sales_data book2("my_book2");
    Sales_data book3("my_book3", 5);
    Sales_data book4(cin);
    Print objPrint;

    cout << "Result of Sales_data():\n";
    objPrint.printOut(cout, book1.bookName);
    objPrint.printOut(cout, book1.count);

    cout << "\n\nResult of Sales_data(string):\t";
    objPrint.printOut(cout, book2.bookName);
    objPrint.printOut(cout, book2.count);

    cout << "\n\nResult of Sales_data(string, unsigned):\t";
    objPrint.printOut(cout, book3.bookName);
    objPrint.printOut(cout, book3.count);

    cout << "\n\nResult of Sales_data(cin):\t";
    objPrint.printOut(cout, book4.bookName);
    objPrint.printOut(cout, book4.count);
}
