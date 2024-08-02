#include <iostream>
#include "C:\Users\Sachin Kansal\Desktop\programs\cpp\trees\BinaryTrees\BinTreeNode.h"
using namespace std;

BinaryTreeNode<int> * IS(BinaryTreeNode<int>* root){
    //to return the leftmost node of the right subtree
    //here we wont receive null root because the condition if root->right == null is checked in the delNode() function already

    while(root -> left){
        root = root -> left;
    }
    return root;
}

BinaryTreeNode<int> * IP(BinaryTreeNode<int> * root){
    //rightmost node of the left subtree

    while(root -> right != NULL){
        root = root -> right;
    }
    return root;
}

BinaryTreeNode<int> * delNode(BinaryTreeNode<int>* root, int val){
   
    //1) search for the value to be deleted in the tree
    //2) if the value exists in the tree, three cases occur for deletion of this node
    //a) it has 0 children i.e. it is a leaf node: just return null to the parent node
    //b) it has 1 child: delete this node, return its child to the parent node
    //c) it has 2 children: replace it with its inorder successor, delete the inorder successor and update the rightmost tree(as inorder successor is the leftmost child of the right subtree)

    if(root == NULL) return root;

    if (root -> data > val){root -> left = delNode(root->left, val);}
    else if (root -> data < val) {root -> right = delNode(root->right, val);}
    else{
        //root->data == val: node to be deleted is found
        //case a: 0 children
        if(!root-> left && !root->right){
            return NULL;
        }

        //case b: 1 children
        else if(!root -> left){
            return root->right;
        }
        else if (!root -> right ){
            return root -> left;
        }
        
        //case c: 2 children
        else{
            BinaryTreeNode<int>* ISuccessor = IS(root -> right);
            root -> data = ISuccessor -> data;
            root -> right = delNode(root -> right, ISuccessor->data);
        }

        
    }
    return root;

}

void printInorder(BinaryTreeNode<int> * root){
    //left -> root -> right
    if(root == NULL){return;}
    printInorder(root->left);
    cout << root -> data << ",";
    printInorder(root->right);
}

int main(){
    BinaryTreeNode<int> * root = takeInputA();
    printBTA(root);
    cout << "Inorder traversal before deleting:"<<endl;
    printInorder(root);
    cout << endl;
    int valueToDel = 111;
    root = delNode(root, valueToDel);
    cout<<"After deletion of "<< valueToDel <<":" << endl;
    printInorder(root);
    //11 6 19 4 8 17 43 -1 5 -1 10 -1 -1 31 49 -1 -1 -1 -1 -1 -1 -1 -1   return 0;
}