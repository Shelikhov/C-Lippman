#include<iostream>
#include<vector>
#include"Sales_data.h"
#include<fstream>
#include<string>

using namespace std;

int main(){
	vector<Sales_data> vec;
	ifstream file;
	file.open("file name");
	string str;

	while(!file.eof()){
		getline(file, str);
		vector<Sales_data>::iterator it = vec.begin();
		for(; it != vec.end(); ++it){
			if(str == it->retName()){
				it->add();
				break;
			}
		}
		if(it == vec.end()){
			Sales_data obj(str);
			vec.push_back(obj);
		}
	}

	file.close();

	for(vector<Sales_data>::iterator it = vec.begin(); it != vec.end(); ++it){
		cout << "Name:\t" << it->retName() << ",\tnumber:\t" << it->retCount() << ",\tcost:\t" << it->retCost() << "\n";
	}
}
