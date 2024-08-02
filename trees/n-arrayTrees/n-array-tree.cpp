#include <iostream>
using namespace std;
#include "TreeNode.h"
#include <queue>
#include <stack>
TreeNode<int>* takeInput(){
    int rootData;
    cout << "Enter data: ";
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    int n;
    cout << "Enter number of childrern: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

TreeNode<int>* takeInputA(){
    int rootData, n, childData;
    cout << "Enter root data: ";
    cin >> rootData;
    cout << "Enter no. of children of " << rootData << ": ";
    TreeNode<int>* root = new TreeNode<int>(rootData);
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Enter child" << i << "of " << rootData << ": ";
        cin >> childData;
        TreeNode<int>* child = new TreeNode<int>(childData);
        root->children.push_back(child);
    }
    for (int i = 0; i < n; i++){
        TreeNode<int>* child = takeInputA();
        // root->children[i].push_back(child);
        root->children[i] = child;
    }
    return root;
}

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

void printTree(TreeNode<int>* root){
    //this is to print a generic tree
    //it has no base condition
    if(root == NULL){
        //this is not a base case, as for other nodes except node, we won't return from here. it is only to manage the base case wherein empty tree is passed.
        return;
    }
    cout << root ->data << ":";
    for(int i = 0; i <  root->children.size(); i++){
        cout << root->children[i]->data << " ";
    }
    cout << endl;

    // if previous loop is removed , then this type of printing is pre - order.
    for(int i = 0; i < root->children.size(); i++){
        printTree(root->children[i]);
    }
}

void printTreeA(TreeNode<int>* root){
   
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty()) {
        TreeNode<int>* frontNode = pendingNodes.front();
        pendingNodes.pop();
        cout << frontNode->data << ": ";
        for(int i = 0; i < frontNode->children.size(); i++){
            cout << frontNode->children[i]->data << ",";
            pendingNodes.push(frontNode->children[i]);
        }
        cout << endl;
    }
}

void preOrder(TreeNode<int>*root){
    if (root == NULL) return;
    cout << root -> data << " ";
    for(int i = 0; i < root->children.size(); i++){
        preOrder(root->children[i]);
    }
}

void postOrder(TreeNode<int>* root){
    //NOT WORKING
    if (root==NULL) return ;
    for(int i = 0; i < root->children.size(); i++){
        // cout << root->children[i] << " ";
        preOrder(root->children[i]);
        cout << root->children[i] ->data << " ";
    }
    cout << root -> data << " ";
    return;
}

void deleteTree(TreeNode<int> * root){
    for(int i = 0; i < root -> children.size(); i++){
        deleteTree(root->children[i]);
    }
    delete root;
}
int main(){
//     // TreeNode<int>* root = new TreeNode<int>(1);
//     // TreeNode<int>* node1 = new TreeNode<int>(2);
//     // TreeNode<int>* node2 = new TreeNode<int>(3);
//     // TreeNode<int>* node11 = new TreeNode<int>(4);
//     // TreeNode<int>* node12 = new TreeNode<int>(5);
//     // root -> children.push_back(node1);
//     // root -> children.push_back(node2);
//     // node1 -> children.push_back(node11);
//     // node1 -> children.push_back(node12);
//     // TreeNode<int>* root = takeInput();
    TreeNode<int>* root = takeInputB();
    // printTreeA(root);
    // preOrder(root);
    postOrder(root);
//     //TODO delete tree
    return 0;
}