#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

//traversal for both generic and binary trees
TreeNode<int>* takeInputB(){
    int rootData;
    cout << "Enter root Data: ";
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        TreeNode<int>* frontNode = pendingNodes.front();
        pendingNodes.pop();
        int n;
        cout << "Enter number of children of " << frontNode->data << ": ";
        cin >> n;
        for(int i = 0; i < n; i++){
            cout << "Enter " << i << "th child of " << frontNode->data << ": ";
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            //TreeNode<int> child(childData) // cannot allocate statically and then store its address in the treeNode because in next iteration memory would be deallocated and the data entered in that address would be gone.
            //front->children.push_back(&child)
            frontNode->children.push_back(child); 
            pendingNodes.push(child);
        }
    }
    return root;
}
void preorder(TreeNode<int>* root){
    if (root == NULL) return;
    cout << root->data << ","; // visit the node first, then traverse its left and right
    for(int i = 0; i < root -> children.size(); i++){
        preorder(root->children[i]);
    }
}

void postorder(TreeNode<int> * root){
    if (!root) {return;}
    for(auto childNode : root->children){
        postorder(childNode);
    }
    cout << root->data << ",";
}

void inorder(TreeNode<int> * root){
    
    if(!root) {return;}
    int i = 0;
    int length = root -> children.size();
    for(; i < length/2; i++){
        inorder(root->children[i]);
    }

    cout << root->data << ",";
    for(;i < root -> children.size(); i++){
        inorder(root->children[i]);
    }
    
}
int main(){
    TreeNode<int>* root = takeInputB();
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    inorder(root);
    return 0;
}