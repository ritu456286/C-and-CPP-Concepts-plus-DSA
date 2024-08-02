#include <iostream>
using namespace std;
#include "Node.cpp"

void ithNode(int index, Node * head){
    Node * temp = head;
    for(int i = 1; i <= index; i++){

        temp = temp -> next;
        if(temp == NULL){
            return;
        }

    }
    cout << temp -> data << endl;
}

void ithNoder(int index, Node * head){
    //recursively
    if(head == NULL){
        return;
    }
    if(index == 0){
        cout << head-> data << endl;
        return;

    }
    ithNoder(index - 1, head-> next);
    return;
}

int main(){
    Node * head = input();
    print(head);
    ithNoder(0, head);
    return 0;
}