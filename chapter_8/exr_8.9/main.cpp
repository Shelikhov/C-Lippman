#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

ifstream &fun(ifstream &);

int main(){
	ifstream file;
	file.open ("text.txt", ifstream::in);
	fun(file);
}

ifstream &fun(ifstream &threadIn){
	string str, word;
	cout << "Content of file text:\n";

	while(!threadIn.eof()){
		getline(threadIn, str);
		istringstream line(str);
		while(line >> word)
			cout << word << "\n";
	}
	return threadIn;
}		
