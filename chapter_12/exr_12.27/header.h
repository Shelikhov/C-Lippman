#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <memory>

class TextQuery{
	public:
		friend class QueryRes;
		TextQuery(std::ifstream &file):{
			int i = 0;
			while(getline(file, line[i])){
				++i;
			}
		}
		void query(){
		}
	private:
		std::vector<std::string> line;
		std::shared_ptr
};

class QueryRes{
	
}
