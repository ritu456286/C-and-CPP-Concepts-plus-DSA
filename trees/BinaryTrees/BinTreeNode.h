#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode<T> * left;
    BinaryTreeNode<T> * right;
    BinaryTreeNode(int data){
        this -> data = data;
        left = NULL;
        right = NULL;

    }

    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};

BinaryTreeNode<int>* takeInputA(){
    //LEVEL WISE(NO RECURSION)
    //create the tree nodes and insert them in a queue 
    // Queue

    int rootData;
    cout << "Enter root: " << endl;
    cin >> rootData;
    if (rootData == -1) return NULL;
    BinaryTreeNode<int> * root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty()){
        BinaryTreeNode<int>* frontNode = pendingNodes.front();
        pendingNodes.pop();
        int leftData, rightData;
        cout << "Enter left data of " << frontNode->data << ": " << endl;
        cin >> leftData;
        cout << "Enter right data of " << frontNode->data<< ": " << endl;
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