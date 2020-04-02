#include<iostream>
#include<string>
#include"limitquote.h"
#include<vector>
#include<memory>

using namespace std;

int main(){
    vector<shared_ptr<Quote>> vec;
    BulkQuote obj1("book1", 23.5, 50.0, 5.0), obj2("book2", 27.5, 50.0, 5.0);
    vec.push_back(make_shared<Quote>(obj1));
    vec.push_back(make_shared<Quote>(obj2));

    double CommonPrice = 0;
    for(shared_ptr<Quote> &el : vec)
        CommonPrice += el->price(1);

    cout << "Common price of books in the vector:\t" << CommonPrice << "\n";
}

