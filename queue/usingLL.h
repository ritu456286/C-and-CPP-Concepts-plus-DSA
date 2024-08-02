#include <iostream>
using namespace std;

template <typename T>
class Node{
    public:
    Node<T> * next;
    T data;
    
    Node(T data){
        next = NULL;
        this -> data = data;
    }
};

template <typename T>
class QueueUsingLL{
    Node<T> * head, *tail;
    int size;
    

    public:

    QueueUsingLL(){
        size = 0;
        head = NULL;
        tail = NULL;
    }

    //getSize
    int getSize(){
        return size;
    }

    //front
    T front(){
        if(head == NULL){
            cout << "Queue is empty" << endl;
            return 0;
        }
        return head -> data;
    }

    //enqueue
    void enqueue(T data){
        Node<T> * newNode = new Node<T>(data);
        if(tail == NULL){
            tail = newNode;
            head = newNode;
            size++;
            return;
        }
        tail-> next = newNode;
        tail = newNode;
        size++;
    }

    //dequeue
    T dequeue(){
        if(head == NULL){
            cout << "Queue is Empty" << endl;
            return 0;
        }
        T ans = head -> data;
        Node<T> * temp = head;
        head = head -> next;
        delete temp;
        size--;
        return ans;
    }

    //isEmpty
    bool isEmpty(){
        return size == 0;
    }

};

