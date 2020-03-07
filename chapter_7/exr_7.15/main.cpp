#include<iostream>
#include<string>
#include"Person.h"
#include"Print.h"

using namespace std;

int main(){
    Person man1;
    Person man2("Piter");
    Person man3("John", "street 7");
    Person man4(cin);
    Print objPrint;

    cout << "Result of Person():\n";
    objPrint.printOut(cout, man1.name);
    objPrint.printOut(cout, man1.address);

    cout << "\n\nResult of Person(string):\n";
    objPrint.printOut(cout, man2.name);
    objPrint.printOut(cout, man2.address);

    cout << "\n\nResult of Person(string, string):\n";
    objPrint.printOut(cout, man3.name);
    objPrint.printOut(cout, man3.address);

    cout << "\n\nResult of Person(cin):\t";
    objPrint.printOut(cout, man4.name);
    objPrint.printOut(cout, man4.address);
}
