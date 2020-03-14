#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

string &toDigit(string &);
bool ndc(char &);

int main(){
	ifstream file;
	file.open("/home/money/c++/test/text.txt");
	string msisdn;

	ostringstream incorrNum, corrNum;
	string::iterator it;

	while(!file.eof()){
		getline(file, msisdn);
		toDigit(msisdn);
		if(msisdn.size() == 11){
			it = msisdn.begin();
			*it = '7';
			if(!ndc(*(it + 1)))
				incorrNum << msisdn << "\n";
			else
				corrNum << msisdn << "\n";
		}else if(msisdn.size() == 10){
			msisdn = '7' + msisdn;
			it = msisdn.begin() + 1;
			if(!ndc(*it))
				incorrNum << msisdn << "\n";
			else
				corrNum << msisdn << "\n";
		}else
			incorrNum << msisdn << "\n";
	}
	cout << "Incorrect numbers:\n" << incorrNum.str() << endl;
	cout << "Correct numbers:\n" << corrNum.str() << endl;
}

string &toDigit(string &str){
	string::iterator it;
	for(it = str.begin(); it != str.end(); ++it){
		if(!isdigit(*it)){
			str.erase(it);
			--it;
		}
	}
	return str;
}

bool ndc(char &number){
	return number == '9' ? true : false;
}
