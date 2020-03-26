#include<iostream>
#include"dict.h"
#include"dictptr.h"
#include<fstream>

using namespace std;

int main(){
    ifstream file("C:/Users/yashelik/Documents/rules.txt");
    Dict obj1(file);

    Dictptr obj2(obj1);//To show dictionary.
}
