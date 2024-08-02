#include <iostream>
using namespace std;
#include "Node.cpp"

Node * insertEndr(int data, Node * head){
    //recursively
    if(head == NULL){
        Node * newNode = new Node(data);
        head = newNode;
        return head;
    }
    head -> next = insertEndr(data, head -> next);
    return head;
}

Node * insertEnd(int data, Node * head){
    //iteratively
    Node * temp = head;
    Node * newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return head;
    }
    while(temp-> next !=  NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
    return head;

}



int main(){
    Node * head  = input();
    print(head);
    head = insertEnd(34, head);
    print(head);

    return 0;
}