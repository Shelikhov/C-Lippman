#include "header.h"

/*Will be mistake at the compilation stage because copy constructor deleted in header.h."*/ 
int main(){
	Employee student1("Tom", 45);
	Employee student2(student1);
	student1.print();
	student2.print();
	return 0;
}
