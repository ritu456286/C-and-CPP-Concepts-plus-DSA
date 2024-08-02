#include <iostream>
using namespace std;
#include "Node.cpp"

Node * eliminateDuplicate(Node * head){

    //ITERATIVELY
    
    //to remove duplicated from the linked list
    Node * curr = head;
    if(curr == NULL){
        return head;
    }
    while(curr -> next != NULL){
        //if current node and next to current node is duplicate
        if(curr-> data == curr -> next -> data){
            //store the neext of the next node
            Node * nextofcurr = curr -> next -> next;
            //delete the next node which is duplicate
            delete curr -> next;
            //Assign the next node to the iterator(Current node)
            curr -> next = nextofcurr;
        }
        //when the next node is not duplicate of current node
        else{
            curr = curr -> next;

        }
    }
    return head;
}
void eliminateDuplicater(Node * head){
    //RECURSIVELY
    if(head == NULL || head -> next == NULL){
        return;
    }
    if(head -> data == head -> next -> data){
        // Node * nextofhead = head -> next -> next;
        // delete head -> next;
        // head -> next = nextofhead;
        // head -> next = head -> next -> next;
        // head -> next = eliminateDuplicater(head -> next -> next);
        Node * nextofhead= head -> next -> next;
        delete head -> next;
        head -> next = nextofhead;

        eliminateDuplicater(head);
    }else{
        eliminateDuplicate(head -> next);
    }
}
int main(){
    Node * head = input();
    print(head);
    eliminateDuplicater(head);
    print(head);
    return 0;
}