#include "header.h"

int main(){
	Folder fol1;

	Message mes1("This is the first message.");
	fol1.save(mes1);

	Message mes2("Second message.");
	fol1.save(mes2);
	
	fol1.show_all_mess();

	std::cout << "_________________" << std::endl;

	fol1.remove(mes2);
	fol1.show_all_mess();
	return 0;
}
