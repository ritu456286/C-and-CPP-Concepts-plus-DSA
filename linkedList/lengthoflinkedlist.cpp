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

int lengthr(Node * head){
    //recursively
    static int count = 0;
    if(head == NULL){
        return 0;
    }
    // head = head -> next;
    // lengthr(head);
    // count ++;
    // return count;

    //or

    return 1 + lengthr(head -> next);
}


int main(){
    Node * head = input();
    print(head);
    cout << "Length of linked list : " << lengthr(head);
}