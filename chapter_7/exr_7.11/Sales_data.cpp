#include "Sales_data.h"

Sales_data::Sales_data(string str):bookName(str), count(0){
}

Sales_data::Sales_data(string str, int val):bookName(str), count(val){
}

Sales_data::Sales_data(istream &threadIn){
    cout << "Enter book name:\n";
    objRead.readIn(threadIn, this->bookName);
    cout << "Enter count of book:\n";
    objRead.readIn(threadIn, this->count);
}

void Sales_data::add(int &val){
    this->count += val;
    return;
}
