#include <vector>
using namespace std;

template <typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode*> children; //vector<TreeNode<T>*>children means the same, by default Tree Node takes \

    TreeNode(T data){
        this -> data = data;
    }
    ~TreeNode(){
        for(int i = 0; i < children.size(); i++){
            delete children[i];
        }
    }

};
