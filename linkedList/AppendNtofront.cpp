#include <iostream>
using namespace std;
#include "Node.cpp"
int length(Node * head){
    //iteratively
    Node * temp = head;
    int length = 0;
    while(temp != NULL){
        length ++;
        temp = temp -> next;
    }
    return length;
}
Node * appendlastNtoFront(int N, Node * head){
    int len = length(head);
    Node * temp = head;
    Node * a = head;
    if(len == N || N == 0){
        return head;
    }
    for(int i = 0; i < len; i++){
        if(i == len - N - 1 ){
            head = temp -> next;
            temp -> next = NULL;
            temp = head;
            continue;
        }else if(temp -> next ==  NULL){
            temp -> next =  a;
        }
        temp = temp -> next;
    }
    return head;
    
}
int main(){
    Node * head = input();
    print(head);
    head = appendlastNtoFront(0, head);
    print(head);
    return 0;
}