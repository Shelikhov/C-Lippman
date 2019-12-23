#include "header.h"

int main(){
	std::ifstream file("/home/money/c++/gitHub/C-Lippman/chapter_12/exr_12.27/file.txt");
	TextQuery tq(file);
	tq.print_map();
	return 0;
}
