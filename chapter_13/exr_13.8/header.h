#include <iostream>

class Operator{
	public:
		Operator(){
		}
		Operator(const int &a):data(a){
		}
		Operator& operator=(Operator& origin){
			data = origin.data;
			return *this;
		}
		int data;
};


