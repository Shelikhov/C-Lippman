#include<iostream>
#include<string>

using namespace std;

string fun();
string fun(int);
string fun(int, int);
string fun(double, double);

int main(){
	cout << "For fun(2.46, 52) should be error:\t fun is ambigious" << endl;
	cout << "For fun(42) the result should be fun(int):\t" << fun(42) << endl;
	cout << "For fun(42, 0) the result should be fun(int, int):\t" << fun(42, 0) << endl;
	cout << "For fun(2.56, 3.14) the result should be fun(double, double):\t" << fun(2.56, 3.14) << endl;
}

string fun(){
	return "fun()";
}

string fun(int val){
	return "fun(int)";
}

string fun(int val1, int val2){
	return "fun(int, int)";
}

string fun(double val1, double val2 = 3.14){
	return "fun(double, double)";
}
