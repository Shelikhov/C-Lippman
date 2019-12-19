#include <iostream>
#include <vector>
#include <memory>
#include <utility>
#include <initializer_list>

class SharedVector {
	public:
		SharedVector();
		SharedVector(std::initializer_list<int> el) :	data(std::make_shared<std::vector<int>> (el)){
		}
 
		void push_back(const int &el){
			data -> push_back(el);
		}
		int& front(){
			return data -> front();
		}
		int& back(){
			return data -> back();
		}

		auto begin(){
			return data -> begin();
		}
		auto end(){
			return data -> end();
		}

	private:
		std::shared_ptr<std::vector<int>> data;
			
};

