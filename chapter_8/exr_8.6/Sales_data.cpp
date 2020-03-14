#include "Sales_data.h"

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

string &Sales_data::retName(){
    return this->name;
}

int &Sales_data::retCount(){
    return this->count;
}

double &Sales_data::retCost(){
    return this->cost;
}

void Sales_data::add(){
    ++this->count;
    return;
}

void Sales_data::add(int &val){
    this->count += val;
    return;
}
