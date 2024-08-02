
#include "BinTreeNode.h"
#include <queue>

//NOTE: binary trees playlist of coding ninjas is still unwatched
void printBT(BinaryTreeNode<int> * root){
    if (root == NULL) return;
    cout << root->data <<":";
    if (root->left){
        cout << "L" << root->left->data <<",";
        
    }
    if(root->right){

        cout << "R" << root->right->data;
    }
    cout << endl;
    printBT(root->left);
    printBT(root->right);

}

BinaryTreeNode<int>*  takeInput(){
    int rootData;
    cout << "Enter data: ";
    cin >> rootData;
    
    if (rootData == -1){
        return NULL;
    }

    BinaryTreeNode<int> * root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftChild = takeInput();
    BinaryTreeNode<int>* rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
    return root;
    
}

BinaryTreeNode<int>* takeInputA(){
    //LEVEL WISE(NO RECURSION)
    //create the tree nodes and insert them in a queue 
    // Queue

    int rootData;
    cout << "Enter root: ";
    cin >> rootData;
    if (rootData == -1) return NULL;
    BinaryTreeNode<int> * root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty()){
        BinaryTreeNode<int>* frontNode = pendingNodes.front();
        pendingNodes.pop();
        int leftData, rightData;
        cout << "Enter left data of " << frontNode->data << ": ";
        cin >> leftData;
        cout << "Enter right data of " << frontNode->data<< ": ";
        cin >> rightData;
        if (leftData != -1){
            BinaryTreeNode<int>* leftChild = new BinaryTreeNode<int>(leftData);
            frontNode->left = leftChild;
            pendingNodes.push(leftChild);
        } 
        if (rightData != -1){
            BinaryTreeNode<int>* rightChild = new BinaryTreeNode<int>(rightData);
            frontNode->right = rightChild;
            pendingNodes.push(rightChild);
        }
    }
    return root; 
}

void printBTA(BinaryTreeNode<int>* root){
    //LEVEL WISE
    //use queues for level wise, no recursion
    if (root == NULL) return;
    // cout << root->data << ":";
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        BinaryTreeNode<int>* frontNode = pendingNodes.front();
        cout << frontNode->data << ":";
        pendingNodes.pop();
        if (frontNode->left != NULL){

            cout << "L" << frontNode -> left -> data << ",";
            pendingNodes.push(frontNode->left);
        }
        if (frontNode->right != NULL){

            cout << "R" << frontNode -> right -> data;
            pendingNodes.push(frontNode->right);
        }
        cout << endl;
    }
    return;
}
int main(){
    // BinaryTreeNode <int> * root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode <int> * node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode <int> * node2 = new BinaryTreeNode<int>(3);

    // root -> left = node1;
    // root -> right = node2;
    BinaryTreeNode<int> * root = takeInputA();


    printBTA(root);


    return 0;
}