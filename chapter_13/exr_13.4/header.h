#include <iostream>

class Class1{
	public:
		Class1(const Class1&);
		Class1(const int &a) : data(a){
		}
		int data;
};

Class1::Class1(const Class1 &origin) : data(origin.data){
};
