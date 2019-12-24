#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <memory>
#include <sstream>
#include <algorithm>
#include <map>
#include <utility>
#include <set>

class TextQuery{
	public:
/*To create vector of each string from text and to create map for each word in the string 
(key = word into string, value = number of string in text*/
		TextQuery(): vec_ptr(std::make_shared<std::vector<std::string>>()){}
		TextQuery(std::ifstream &file): vec_ptr(std::make_shared<std::vector<std::string>>()){
			std::string line, word;
			int row = 0;
			while(getline(file, line)){
				vec_ptr->push_back(line);
				std::istringstream record(line);
				while(record >> word){
					words[word].push_back(row);
				}
				row++;
			}
		}
		auto begin(){
			return vec_ptr->begin();
		}
		auto end(){
			return vec_ptr->end();
		}
/*Fun search is looking word from input in the map*/
		void search(std::string &purpose){
			std::set<int> rows;
			std::cout << "The word \"" << purpose << "\" occurs " << words[purpose].size() << " times in the text." << std::endl;
			if(words.find(purpose) != words.end()){
				for_each(words[purpose].begin(), words[purpose].end(), [&rows](int &num){
					rows.insert(num);});
			}
			for(auto it = rows.begin(); it != rows.end(); ++it){
				std::cout << "(Line " << *it << ") " << *(vec_ptr->begin() + *it) << std::endl;
			}
			return;
		}
	private:
		std::shared_ptr<std::vector<std::string>> vec_ptr;
		std::map<std::string, std::vector<int>> words;
};
