#include <iostream>
#include <string>

class Employee{
	public:
		Employee(): name("undefined"), ID(0){
		}
		Employee(std::string str, int num): name(str), ID(num){
		} 
		Employee(Employee&) = delete;
	
		void print(){
			std::cout << name << " " << ID << std::endl;
			return;
		}
	private:
		std::string name;
		int ID;
};
