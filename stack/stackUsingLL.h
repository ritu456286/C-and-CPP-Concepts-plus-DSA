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
class StackUsingLL{
    int size;
    Node<T> * head;

    public:

    StackUsingLL(){
        size = 0;
        head = NULL;
    }    

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return (head == NULL);
    }

    T top(){
        if(isEmpty()){
            cout << "Stack is Empty" << endl;
            return 0;
        }
        return head->data;
    }

    T pop(){
        if(isEmpty()){
            cout << "Stack is empty! " << endl;
            return 0;
        }
        else{
            Node<T> * temp = head;
            T ans = head -> data;
            head = head -> next;
            delete temp;
            size --;
            return ans;
        }
    }

    void push(T ele){
        Node<T> * newNode = new Node<T>(ele);
        // newNode -> next = head;
        // head = newNode;   
        head -> next = newNode;
        head = newNode;
        size ++;
        return;   
    }
};


// int main(){
    // StackUsingLL<int> p;
    // cout << p.getSize() << endl;
    // cout << p.isEmpty() << endl;
    // cout << p.pop() << endl;
    // cout << p.top() << endl;

    // p.push(10);
    // p.push(20);
    // p.push(30);
    // // p.push(40);
    // cout << p.getSize() << endl;
    // cout << p.top() << endl;
    // cout << p.isEmpty() << endl;
    // cout << p.pop() << endl;
    // cout << p.pop() << endl;
    // cout << p.pop() << endl;
    // cout << p.top() << endl;
    // cout << p.pop() << endl;
    // cout << p.pop() << endl;

//     StackUsingLL<char> s1;
//     s1.push('a');
//     s1.push('b');
//     s1.push('c');
//     s1.push('d');
//     s1.push('e');
//     cout << s1.pop() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.top() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.pop() << endl;
//     cout << s1.pop() << endl;



 
//     return 0;
// }