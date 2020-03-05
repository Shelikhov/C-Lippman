#include<iostream>
#include<vector>

using namespace std;

int fun(int, int);

int main(){
	vector<decltype(fun) *> vec;

//To create pointers to function fun.
	int (*ptrFun)(int, int) = fun;
	int (*ptrFun2)(int, int) = fun;
	int (*ptrFun3)(int, int) = fun;

//To add pointers to a vector.
	vec.push_back(ptrFun);
	vec.push_back(ptrFun2);
	vec.push_back(ptrFun3);

//To output contents of vector.
	for(int i = 0; i < vec.size(); ++i){
		cout << "Element number " << i << " in vector:\t" << (*(vec.begin() + i))(i, i) << endl;
	}
}

int fun(int val1, int val2){
	return val1 + val2;
}
