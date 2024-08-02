#include <iostream>
using namespace std;

class Node{
    //to impplement every node of the linked list
    public:
    Node * next;
    int data;
    Node(int data){
        this -> data =  data;
        next = nullptr;
    }
};

class LinkedList{
    //implementing the linked list class
    Node * head;
    Node * tail;
    public:
    LinkedList(){
        this -> head = nullptr;
        this -> tail = head;
    }
    LinkedList(int data){
        this -> head = new Node(data);
        this -> tail = head;
    }

    void insert_at_start(int num){
        //insert the elements at the start of the linked list
        Node * newNode = new Node(num);
        if(!head){
            tail = newNode;
        }
        newNode -> next = head;
        head = newNode;
    }

    void remove_from_start(){
        //remove the element from the start of the list
        if(!head) return;
        Node * newHead = head -> next;
        delete head;
        head = newHead;
    }

    void insert_at_end(int num){
        //insert the element at the end of the list
        Node * newNode = new Node(num);
        if(!head){
            head = newNode;
            tail = newNode;
            return;
        }
        tail -> next = newNode;
        tail = newNode;
    }

    void remove_from_end(){
        // remove the element from the end of the list
        if(!head) return;
        if(head -> next == nullptr){
            delete head;
            head = nullptr;
        }
        Node * curr = head;
        while(curr -> next -> next){
            curr = curr -> next;
        }
        tail = curr;
        curr = curr -> next;
        delete curr;
    }

    int front(){
        //return the first elemetn from the end of the list
        if(!head) return -1;
        return head -> data;
    }

    int last(){
        //Return the last element of the list
        if(!head) return -1;
        return tail -> data;
    }

    void traverse(){
        //Print all the elements from the start to the end of the list
        if(!head) return;
        Node * curr = head;
        while(curr){
            cout << curr -> data << ",";
            curr = curr -> next;
        }
        cout << endl;
        return;
    }
};
