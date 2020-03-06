#include "Sales_data.h"

Sales_data::Sales_data():bookNo(""), count(0){
}

const string &Sales_data::isbn() const{
    return bookNo;
}

Sales_data &Sales_data::combine(Sales_data &obj){
    this->count += obj.count;
    return *this;//To get youself back.   
}

void Sales_data::add(string name){
    this->bookNo = name;
    this->count += 1;
    return;
}

int &Sales_data::cnt(){//To return count of certain book.
    return this->count;
}
