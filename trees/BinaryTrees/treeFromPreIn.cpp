#include <iostream>
using namespace std;
#include "BinTreeNode.h"

BinaryTreeNode<int> * getTree(int pre[], int in[], int preS, int preE, int inS, int inE){
    
    //pre : root -> left -> right
    //ino : left -> root -> right
    
    if(preS > preE) return NULL;
    int rootData = pre[preS];
    //to find the root index in the inorder:
    int rootIndex = -1; //this is the rootIndex in the inorder
    for(int i = inS; i <= inE; i++){
        if(in[i] == rootData){
            rootIndex = i;
            break;
        }
    }


    int LpreS = preS + 1;
    int RpreE = preE;
    int LinS = inS;
    int LinE = rootIndex -1;
    int RinS = rootIndex + 1;
    int RinE = inE;
    int LpreE = LinE - LinS + LpreS;
    int RpreS = LpreE + 1;
    BinaryTreeNode<int>*root = new BinaryTreeNode<int>(pre[preS]);
    root -> left = getTree(pre, in, LpreS, LpreE, LinS, LinE);
    root -> right = getTree(pre, in, RpreS, RpreE, RinS, RinE);
    return root;
}

void printBtree(BinaryTreeNode<int> * root){
    if (!root) return;
    queue<BinaryTreeNode<int>*> q;
    // cout << root->data <<":";
    q.push(root);
    while(q.empty() == false){
        BinaryTreeNode<int> * frontNode = q.front();
        q.pop();
        cout << frontNode->data << ": ";
        if(frontNode -> left != NULL){
            q.push (frontNode ->left );
            cout << "L" <<frontNode->left->data << ", ";
        }
        if(frontNode -> right != NULL){
            q.push (frontNode ->right );
            cout << "R" <<frontNode->right->data << ", ";
        }
        cout << endl;
    }
} 


int main(){
    
    return 0;
}