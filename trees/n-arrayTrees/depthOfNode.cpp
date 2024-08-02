#include <iostream>
using namespace std;
#include "TreeNode.h"
#include <queue>

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

void printAtLevel(TreeNode<int>* root, int k){
    if (k == -1 ||!root) {return;}
    if (k == 0){
        cout << root -> data << endl;
        return;
    }
    for(int i = 0; i < root->children.size(); i++){
        printAtLevel(root->children[i], k-1);

    }
}

int main(){
    TreeNode<int>* root = takeInputB();
    // cout << printAtLevel(root, 3);

    printAtLevel(root, 3);
    return 0;
}