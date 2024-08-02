#include <iostream>
using namespace std;
#include "Node.cpp"

Node * insertFront(int data, Node * head){
    Node * newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
    return head;
}
int main(){
    Node * head = input();
    print(head);
    head = insertFront(3454, head);
    print(head);
    return  0;
}