#include <iostream>
using namespace std;
#include "Node.cpp"

Node * insertNode(int index, int ele, Node * head){
    //iteratively

    Node * temp = head;
    Node * newNode = new Node(ele);

    if(index == 0){
        newNode -> next = head;
        head = newNode;
        return head;
    }
    for (int i = 0; i < index - 1 && temp != NULL; i++){
        temp = temp -> next;
    }
   
   if(temp != NULL){
    // Node * a = temp -> next;
    // temp -> next = newNode;
    // newNode -> next = a;
    newNode -> next = temp -> next;
    temp -> next = newNode;
   }
    return head;
}

Node * insertNoder(int index, int data, Node * head){
    //recursively
    
    if(index == 0){
        Node * newNode = new Node(data);
        newNode ->next = head;
        head = newNode;
        return head;
    }
    if(head == NULL){
        return head;
    }
    head -> next = insertNoder(index - 1, data, head -> next);
    return head;
}

int main(){

    Node * head = input();
    print(head);
    head = insertNoder(89,456,head);
    print(head);
    return 0;
}