#include<iostream>
#include<vector>

using namespace std;

int funAdd(int, int);
int funSub(int, int);
int funMult(int, int);
int funDiv(int, int);

int main(){
	int (*ptrFun)(int, int);
	vector<decltype(ptrFun)> vec;

	vec.push_back(*funAdd);
	vec.push_back(*funSub);
	vec.push_back(*funMult);
	vec.push_back(*funDiv);

	for(int i = 0; i < vec.size(); ++i){
		cout << (*(vec.begin() + i))(2, 3) << endl;
	}
}

int funAdd(int val1, int val2){
	return val1 + val2;
}

int funSub(int val1, int val2){
	return (val1 > val2) ? (val1 - val2) : (val2 - val1);
}

int funMult(int val1, int val2){
	return val1 * val2;
}

int funDiv(int val1, int val2){
	return val1 / val2;
}
