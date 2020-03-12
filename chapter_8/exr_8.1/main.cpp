#include<iostream>
#include<fstream>

using namespace std;

ifstream &fun(ifstream &);
int main(){
	ifstream file;
	fun(file);
}

ifstream &fun(ifstream &threadIn){
	cout << "State of threadIn before use:\t" << threadIn.rdstate() << endl;
	threadIn.open ("file name");
	char ch;
	cout << "Content of thread:\n";
	do{
		threadIn >> ch;
		cout << ch;
	}while(!threadIn.eof());
	cout << "\nState of threadIn after use:\t" << threadIn.rdstate() << endl;
	threadIn.clear();
	cout << "\nState of threadIn after correct:\t" << threadIn.rdstate() << endl;
	return threadIn;
}		
