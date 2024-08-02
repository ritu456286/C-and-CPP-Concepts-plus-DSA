#include <iostream>
#include <limits.h>
#include "C:\Users\Sachin Kansal\Desktop\programs\cpp\trees\BinaryTrees\BinTreeNode.h"
using namespace std;
int maximum(BinaryTreeNode<int> * root){
    if (root == NULL) return INT_MIN;
    int smallOutput = max(root->data, max(maximum(root->left), maximum(root->right)));
    return smallOutput;
}
int minimum(BinaryTreeNode<int> * root){
    if (root == NULL) return INT_MAX;
    int smallOutput = min(root->data, min(minimum(root->left), minimum(root->right)));
    return smallOutput;
}
bool isBST(BinaryTreeNode<int> *root){
    if (root == NULL) return 1;
    int leftMax = maximum(root ->left);
    int rightMin = minimum(root -> right);
    bool output = (root -> data > leftMax) && (root -> data < rightMin) && isBST(root -> right) && isBST(root -> left);
    return output;
}
int main(){
    BinaryTreeNode<int> *root = takeInputA();
    cout << isBST(root) << endl;
    return 0;
}