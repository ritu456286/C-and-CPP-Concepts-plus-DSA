#include <iostream>
#include "C:\Users\Sachin Kansal\Desktop\programs\cpp\trees\BinaryTrees\BinTreeNode.h"

using namespace std;


bool search(BinaryTreeNode<int>* root, int ele){
    if (root == NULL) return false;
    else if (root -> data == ele) return true;
    else if (ele > root -> data){
        search(root -> right, ele);
    }
    else if(ele < root -> data){
        search(root -> left, ele);
    }
}   
int main(){
    BinaryTreeNode<int> * root = takeInputA();
    int x = 2;
    // search(root,x)? cout << "found" : cout << "not found" ;
    bool found = search(root, x);
    cout << endl;
    cout << endl;
    cout << found; 
    return 0;
}
// 5 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1