#include <iostream>
#include "Q_1LinkedList.h" //importing the linked list header file
using namespace std;

class Dequeue{
    //Implement dequeue using linked list
    LinkedList * dq;
    public:
    Dequeue(){
        dq = new LinkedList();
    }
    void push_back(int num){
        //insert element at the back of the dequue
        dq -> insert_at_start(num);
    }

    void push_front(int num){
        //insert element at the back of the dequeue
        dq -> insert_at_end(num);
    }

    void pop_back(){
        //remove the element from the back of the dequeue
        dq -> remove_from_end();
    }
    void pop_front(){
        //remove element from the front of the dequeue
        dq -> remove_from_start();
    }
    int back(){
        //retur the back element of the queue
        return dq -> last();
    }
};