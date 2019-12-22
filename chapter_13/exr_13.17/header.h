#include <iostream>

class Numbered{
	public:
		Numbered(Numbered&);
		Numbered(int &a) : number(a){
		}
		Numbered& operator=(int &a);
		int number;
};

Numbered::Numbered(Numbered &origin):
	number(origin.number){
	int a = 1;
	operator=(a);
};

Numbered& Numbered::operator=(int &a){
	number = number + a;
	return *this;
};
