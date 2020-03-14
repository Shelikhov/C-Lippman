#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<string>

using namespace std;

int main(){
	ifstream file;
	file.open("/home/money/c++/gitHub/C-Lippman/chapter_8/exr_8.10/text.txt", ifstream::in);
	vector<string> vec;
	string str;

	while(!file.eof()){
		getline(file, str);
		vec.push_back(str);
	}

	vector<string>::iterator it;
	string word;
	for(it = vec.begin(); it != vec.end(); ++it){
		istringstream sstrm(*it);
		while(sstrm >> word)
			cout << word << "\n";
	}

	file.close();
}
