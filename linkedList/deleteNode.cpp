#include <iostream>
using namespace std;
#include "Node.cpp"

Node * deleteNode(int index, Node * head){
    Node * temp = head;
    if(index == 0){
        head = head -> next;
        delete temp;
        return head;
    }
    for(int i = 0; i < index - 1 && temp != NULL; i++){
        temp = temp -> next;
    }
    if(temp != NULL && index > 0){
        Node * a = temp -> next;
        Node * b = a -> next;
        temp -> next = b;
        delete a;
    }
    return head;
}

Node * deleteNoder(int index, Node * head){
    //recursively
    if(index == 0){
        Node * temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
    if(head == NULL){
        return head;
    }
    head -> next = deleteNoder(index - 1, head -> next);
    return head;

}
int main(){
    Node * head =input();
    print(head);
    head = deleteNoder(0, head);
    print(head);
    return 0;
}