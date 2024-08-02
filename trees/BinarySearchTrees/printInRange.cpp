#include <iostream>
#include "C:\Users\Sachin Kansal\Desktop\programs\cpp\trees\BinaryTrees\BinTreeNode.h"
using namespace std;

void printInRange(BinaryTreeNode<int> * root, int min, int max){
    //to print the elements from the BST which are in the given range
    if (root == NULL) return;
    if (root -> data > max){ return printInRange(root -> left, min, max);}
    if(root -> data < min) { return printInRange(root -> right, min, max);} 
    cout << root -> data << "," ;
    printInRange(root->left, min, max);
    printInRange(root -> right, min, max);
    // return printInRange(root -> left, min, max);
    // return printInRange(root -> right, min, max);
}

int main(){
    BinaryTreeNode<int>* root = takeInputA();
    printInRange(root, 15, 30);
    return 0;
}
// 20 10 40 7 12 30 50 -1 -1 0 14 -1 -1 -1 -1 -1 -1 -1 -1 