#include <iostream>
#include <string>
#include <memory>

/*Using allocator.*/
int main(){
	std::allocator<std::string> alloc;
	std::string *ptr1 = alloc.allocate(15);
	auto ptr2 = ptr1, ptr3 = ptr1 + 14;

	std::string str;
	getline(std::cin, str);
	if(str != ""){
		alloc.construct(ptr2, str);
		do{
			getline(std::cin, str);
			alloc.construct(++ptr2, str);
		}while(str != "");
	}
	std::uninitialized_fill_n(ptr2, ptr3 - ptr2 + 1, "42");
	for(int i = 0; i < 15; ++i){
		std::cout << *(ptr1 + i) << std::endl;
		alloc.destroy(ptr1 + i);
	}
	alloc.deallocate(ptr1, 15);
	return 0;
}
