#include<iostream>
#include<vector>
#include"Sales_data.h"
#include<fstream>
#include<string>

using namespace std;

int main(){
	vector<Sales_data> vec;
	ifstream fileIn;
	fileIn.open("textIn.txt", ifstream::in);
	string str;

	while(!fileIn.eof()){
		getline(fileIn, str);
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

	fileIn.close();

	ofstream fileOut;
	fileOut.open("textOut.txt", ofstream::out | ofstream::app);


	for(vector<Sales_data>::iterator it = vec.begin(); it != vec.end(); ++it){
		fileOut << "Name:\t" << it->retName() << ",\tnumber:\t" << it->retCount() << ",\tcost:\t" << it->retCost() << "\n";
	}
	fileOut.close();
}
