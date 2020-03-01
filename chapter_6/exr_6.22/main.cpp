#include <iostream>
#include<string>
using namespace std;

void fun(int**, int**);

int main(){
    int i = 8, j = 9, *ptr1 = &i, *ptr2 = &j;
    cout << "pointer 1 =\t" << *ptr1 << "\npointer 2 =\t" << *ptr2 << endl;
    fun(&ptr1, &ptr2);
    cout << "Result after function:\n" << "pointer 1 =\t" << *ptr1 << "\npointer 2 =\t" << *ptr2 << endl;
}

void fun(int **ptr3, int **ptr4){//Swap pointers with each other.
    int *temp = *ptr3;
    *ptr3 = *ptr4;
    *ptr4 = temp;
    temp = 0;
}
