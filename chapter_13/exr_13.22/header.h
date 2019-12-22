#include <iostream>
#include <memory>

class SharedPtr{
	public:
		SharedPtr(): data(std::make_shared<int> (0)){
		}
		SharedPtr(int num): data(std::make_shared<int> (num)){
		}
		SharedPtr(SharedPtr &origin): data(origin.data){
		}
		void print(){
			std::cout << *data << std::endl;
			return;
		}
		void inc(){
			++*(data);
			return;
		}
	private:
		std::shared_ptr<int> data;
};

class NotShared{
	public:
		NotShared(): value(0){
		}
		NotShared(int num): value(num){
		}
		NotShared(NotShared &origin): value(origin.value){
		}
		void print(){
			std::cout << value << std::endl;
			return;
		}
		void inc(){
			++value;
			return;
		}
	private:
		int value;
};
