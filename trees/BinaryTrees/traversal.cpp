#include <iostream>
#include "BinTreeNode.h"
using namespace std;

void pre(BinaryTreeNode<int> * root){
    //root -> l -> r
    if(root == NULL) return;
    cout << root -> data << " ";
    pre(root->left);
    pre(root->right);
}

void in(BinaryTreeNode<int>* root){
    //l->root -> r
    if(root == NULL) return;
    in(root->left);
    cout << root -> data;
    in(root -> right);
}

void post(BinaryTreeNode<int> * root){
    // l -> r ->  root
    if (root==NULL )return ;
    post(root -> left);
    post(root -> right);
    cout << root -> data << " ";
}

void levelWise(BinaryTreeNode<int> * root){
    if (root == NULL) return;
    // cout << root -> data << ": "; 
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty()) {}
        BinaryTreeNode<int>* frontNode = pendingNodes.front();
        pendingNodes.pop();
        cout<<frontNode->data<<" : "<<endl;
        if (frontNode->left!= nullptr) {
            pendingNodes.push(frontNode->left);
            cout << "L" << frontNode ->left -> data << ", ";
        }
        if (frontNode->right!= nullptr) {
            pendingNodes.push(frontNode->right);
            cout << "R" << frontNode ->right -> data;
        }
        cout << endl;
}
int main(){
    
    return 0;
}