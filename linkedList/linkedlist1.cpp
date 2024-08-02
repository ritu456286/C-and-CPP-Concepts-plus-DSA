#include <iostream>
using namespace std;
#include "Node.cpp"
// class Node{
//     public:
//     Node *next;
//     int data;

//     Node(int data){
//         this->data = data;
//         next = NULL;
//     }
// };


// Node * takeinput(){
//     // time complexity of this is O(n)
//     int data;
//     cin >> data;
//     Node *head = NULL, *tail = NULL;
//     while(data != -1){
//         // Node n(data); //STATICALLY CREATED OBJECTS GET DEALLOCATED AFTER EACH ITERATION IS OVER
//         Node * newNode = new Node(data);
//         if(head == NULL){
//             head = newNode; 
//             tail = newNode;
//         }      
//         else{
//             // tail = newNode;
//             // or
//             tail -> next = newNode;
//             tail = tail -> next;
//         }
//         cin >> data;
//     }
//     return head;
// }


// Node * input(){
//     // time complexity of this is O(n^2)
//     int data;
//     cin >> data;
//     Node *head = NULL;
//     while(data != -1){
//         // Node n(data); //STATICALLY CREATED OBJECTS GET DEALLOCATED AFTER EACH ITERATION IS OVER
//         Node * newNode = new Node(data);
//         if(head == NULL){
//             head = newNode; 
//         }      
//         else{
//             Node * temp = head;
//             while(temp -> next != NULL){
//                 temp = temp -> next;
//             }
//             temp -> next = newNode;
//         }
//         cin >> data;
//     }
//     return head;
// }

// void print(Node *head){
//     //printing linked list
//     // Node *temp = head;
//     while(head != NULL){
//         cout << head -> data << " ";
//         head = head -> next;
//     }
//     cout << endl;
//     while(head != NULL){
//         cout << head -> data << " ";
//         head = head -> next;
//     }
    
// }

int main(){
    /*
    //statically
    Node n1(1);
    Node n2(2);
    Node * head = &n1;
    n1.next = &n2;
    // cout << n1.data << " " << n2.data << endl;

    //Dynamically

    Node *n3 = new Node(10);
    Node *n4 = new Node(20);
    Node *n5 = new Node(30);
    Node *n6= new Node(40);
    Node *head1 = n3;
    n3 -> next = n4;
    n4 -> next = n5;
    n5 -> next = n6;

    //printing linked list
    print(head);
    print(head);
    print(head1);
    */

    Node *head = takeinput();
    print(head);
    return 0;
}