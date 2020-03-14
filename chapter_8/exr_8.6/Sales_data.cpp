#include "sales_data.h"

Sales_data::Sales_data(string str):name(str), count(1), cost(0){
}

Sales_data::Sales_data(string str, int val):name(str), count(val), cost(0){
}

Sales_data::Sales_data(istream &threadIn){
    cout << "Enter book name:\n";
    objRead.readIn(threadIn, this->name);
    cout << "Enter count of book:\n";
    objRead.readIn(threadIn, this->count);
    cout << "Enter cost of book:\n";
    objRead.readIn(threadIn, this->cost);
}

string &Sales_data::retName(Sales_data &obj){
    return obj.name;
}

int &Sales_data::retCount(Sales_data &obj){
    return obj.count;
}

double &Sales_data::retCost(Sales_data &obj){
    return obj.cost;
}

void Sales_data::add(){
    ++this->count;
    return;
}

void Sales_data::add(int &val){
    this->count += val;
    return;
}
