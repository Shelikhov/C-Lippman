#include<iostream>
#include<string>
#include"treenode.h"

using namespace std;

int main(){
    TreeNode obj1("Node1"), obj2;
    TreeNode obj3(obj1), obj4;
    obj4 = obj2;
    obj1.print();
    obj2.print();
    obj3.print();
    obj4.print();
}
