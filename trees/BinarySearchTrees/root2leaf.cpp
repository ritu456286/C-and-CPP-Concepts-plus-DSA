#include <iostream>
#include <vector>
#include "C:\Users\Sachin Kansal\Desktop\programs\cpp\trees\BinaryTrees\BinTreeNode.h"
using namespace std;
void printPath(vector<int> path){
    for(auto i : path){
        cout << i << ", " ;
        
    }
    cout << endl;
    return;
}
void root2leaf(BinaryTreeNode<int> * root, vector<int> path){
    if (root == NULL) return;
    
    path.push_back(root -> data);
    //base case: leaf node is reached and we have to print the current path
    if ((root->left==NULL && root->right==NULL)){
      
        printPath(path);

        cout << endl;
    }else{

        root2leaf(root -> left, path);
        root2leaf(root -> right, path);
    }
    path.pop_back();
}
int main(){
    BinaryTreeNode<int> * root = takeInputA();
    vector<int> path;
    //printing all the paths possible to reach different leaves in a BT
    cout << endl;
    
    root2leaf(root, path);
    return 0;
}