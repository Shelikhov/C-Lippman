#ifndef TREENODE_H
#define TREENODE_H

#include<iostream>
#include<string>

using namespace std;

class TreeNode{
public:
    TreeNode();
    TreeNode(const string);
    TreeNode(TreeNode&);
    TreeNode &operator=(TreeNode &);
    void print();
    ~TreeNode();
private:
    string name;
    unsigned *ptr;
    unsigned id;
    TreeNode *leftPtr;
    TreeNode *rightPtr;
    void delPtr();
    void linkPtr(TreeNode &);
};

#endif
