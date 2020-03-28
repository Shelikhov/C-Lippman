#include "treenode.h"

TreeNode::TreeNode(): name("undefined"), ptr(new unsigned(1)), id(*ptr), leftPtr(nullptr), rightPtr(nullptr){
}

TreeNode::TreeNode(const string str): name(str), ptr(new unsigned(1)), id(*ptr), leftPtr(nullptr), rightPtr(nullptr){
}

TreeNode::TreeNode(TreeNode &obj): name(obj.name){
    ++(*(obj.ptr));
    ptr = obj.ptr;
    id = *ptr;
    linkPtr(obj);
}

TreeNode &TreeNode::operator=(TreeNode &obj){
    delPtr();

    //Link to obj.
    ++(*(obj.ptr));
    if(--(*ptr) == 0)
        delete ptr;
    else
        ++(*ptr);
    ptr = obj.ptr;
    id = *ptr;
    linkPtr(obj);
    return *this;
}

TreeNode::~TreeNode(){
    if(--(*ptr) == 0)
        delete ptr;
    if(leftPtr != nullptr || rightPtr != nullptr)
        delPtr();
}

void TreeNode::print(){
    cout << "Name:\t" << name << "\nID:\t" << id << "\n";
    if(leftPtr != nullptr)
        cout << "Left node:\t" << leftPtr->name << "\n";
    else
        cout << "Left node:\tempty\n";
    if(rightPtr != nullptr)
        cout << "Right node:\t" << rightPtr->name << "\n";
    else
        cout << "Right node:\tempty\n";
}

void TreeNode::delPtr(){//To check pointers of current object.
    if(leftPtr != nullptr && rightPtr != nullptr){
        rightPtr->leftPtr = leftPtr;
        leftPtr->rightPtr = rightPtr;
        leftPtr = nullptr;
        rightPtr = nullptr;
    }else if(leftPtr != nullptr && rightPtr == nullptr){
        leftPtr->rightPtr = nullptr;
        leftPtr = nullptr;
    }else if(leftPtr == nullptr && rightPtr != nullptr){
        rightPtr->leftPtr = nullptr;
        rightPtr = nullptr;
    }
}


void TreeNode::linkPtr(TreeNode &obj){//If obj has own child. That child will be child of the current object. And current object will be child of obj.
    leftPtr = &obj;
    if(leftPtr->rightPtr != nullptr){
        rightPtr = leftPtr->rightPtr;
        leftPtr->rightPtr->leftPtr = this;
        leftPtr->rightPtr = this;
    }else{
        leftPtr->rightPtr = this;
        rightPtr = nullptr;
    }
}
