#include <iostream>
#include "BinTreeNode.h"
using namespace std;

int countNodes(BinaryTreeNode<int>* root){
    if (root == NULL) return 0;
    int leftCount = countNodes(root -> left);
    int rightCount = countNodes(root -> right);
    return leftCount + rightCount + 1;
}
int main(){
    
    return 0;
}