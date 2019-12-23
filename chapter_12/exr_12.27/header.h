#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <memory>
#include <sstream>
#include <algorithm>
#include <map>
#include <utility>

class TextQuery{
	public:
		TextQuery(): vec_ptr(std::make_shared<std::vector<std::string>>()){}
		TextQuery(std::ifstream &file): vec_ptr(std::make_shared<std::vector<std::string>>()){
			std::string line, word;
			int key = 0;
			while(getline(file, line)){
				vec_ptr->push_back(line);
				std::istringstream record(line);
				while(record >> word){
					words[key].push_back(word);
				}
				key++;
			}
		}
		auto begin(){
			return vec_ptr->begin();
		}
		auto end(){
			return vec_ptr->end();
		}
		void print(){
			for_each(vec_ptr->begin(), vec_ptr->end(), [](std::string &str){
					std::cout << str << std::endl;
					std::cout << "***" << std::endl;
				});
			return;	
		}
		void print_map(){
			for_each(words[0].begin(), words[0].end(), [](std::string &str){
				std::cout << str << std::endl;});
			return;
		}
	private:
		std::shared_ptr<std::vector<std::string>> vec_ptr;
		std::map<int, std::vector<std::string>> words;
};
