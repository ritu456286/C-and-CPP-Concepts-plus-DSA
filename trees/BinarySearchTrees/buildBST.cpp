#include <iostream>
#include "C:\Users\Sachin Kansal\Desktop\programs\cpp\trees\BinaryTrees\BinTreeNode.h"
using namespace std;

BinaryTreeNode<int> * insert(BinaryTreeNode<int>* root, int val){
    if (root == NULL) {
        root = new BinaryTreeNode<int>(val);
        return root;
    }
    if(val >= root -> data){
        //go to right subtree and call the function recursively for that node
        root -> right = insert(root -> right, val);
    }else if(val < root -> data){
        //go to left subtree and call the function recursively for that node
        root -> left = insert(root -> left, val);
    }
    return root;
}

void inorder(BinaryTreeNode<int>* root){
    //left -> root -> right
    if (root == NULL) {return;}
    inorder(root -> left);
    cout << root -> data<< ",";
    inorder(root -> right);
}
int main(){
    BinaryTreeNode<int> * root = NULL;
    int val[] = {11,6,4,19,8,4,5,10};
    for(auto i : val){
        root = insert(root, i);
    }
    cout << endl;
    inorder(root);
    cout << endl;
    printBTA(root);

    return 0;
}