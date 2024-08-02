#include <iostream>
using namespace std;
#include "Node.cpp"

void printr(Node * head){
    //recurisvely
    if(head == NULL){
        return;
    }
    cout << head -> data << " ";
    printr(head -> next);
    
}
int main(){
    Node * head = input();
    printr(head);

    return 0;
}