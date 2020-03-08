#include<iostream>
#include<string>
#include"Person.h"
#include"Print.h"

using namespace std;

int main(){
    Person man("Tom");
    Print objPrint;

    cout << "\nResult of Person(cin):\t";
    objPrint.printOut(cout, man.retName());
    objPrint.printOut(cout, man.retAddr());
}
