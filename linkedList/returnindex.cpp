#include <iostream>
using namespace std;
#include "Node.cpp"
int findNode(int data, Node * head){
    int index = 0;
    Node * temp = head;
    while(temp != NULL){
        if(temp->data == data){
            return index;
        }
        temp = temp -> next;
        index++;
    }
    if(temp == NULL){
        return -1;
    }
}
int main(){
    Node * head = input();
    print(head);
    cout << findNode(45, head) << endl; 

    return 0;
}