#include "Sales_data.h"

Sales_data::Sales_data():bookNo(""), count(0){
}

string &Sales_data::isbn(){
    return bookNo;
}

void Sales_data::combine(Sales_data &obj){
    this->count += obj.count;
    return;
}

void Sales_data::add(string name){
    this->bookNo = name;
    this->count += 1;
    return;
}

int &Sales_data::cnt(){
    return this->count;
}
