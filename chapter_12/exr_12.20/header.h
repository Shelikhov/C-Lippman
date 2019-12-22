#include <iostream>
#include <vector>
#include <memory>
#include <initializer_list>
#include <stdexcept>
#include <fstream>
#include <sstream>

class StrBlobPtr;

class StrBlob{
	public:
		friend class StrBlobPtr;
		StrBlob(): 
			data(std::make_shared<std::vector<std::string>>()){
		}
		StrBlob(std::initializer_list<std::string> el): 
			data(std::make_shared<std::vector<std::string>> (el)){
		}
		auto begin(){
			return data -> begin();
		}
		auto end(){
			return data -> end();
		}
		void push_back(const std::string &str){
			data -> push_back(str);
		}
		void pop_back(){
			data -> pop_back();
		}
		void clear(){
			data -> clear();
		}
	private:
		std::shared_ptr<std::vector<std::string>> data;
};

class StrBlobPtr{
	public:
		StrBlobPtr(): 
			cur(0){
		}
		StrBlobPtr(StrBlob &object, size_t sz = 0):
			wptr(object.data), cur(sz){
		}
		std::shared_ptr<std::vector<std::string>> check(std::size_t i){
			auto res = wptr.lock();
			if (!res){
				throw std::runtime_error("Pointer doesn't excist.");
			}else{
				std::cout << "success" << std::endl;
			}
			if (i >= res -> size()){
				throw std::out_of_range("out of range");
			}
			return res;
		}
	private:
		std::weak_ptr<std::vector<std::string>> wptr;
		std::size_t cur;
};
