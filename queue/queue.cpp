#include <iostream>
using namespace std;
// #include "usingDynamicarray.h"
#include "usingLL.h"
int main(){
   
   
    // q.enqueue(30);
    // q.enqueue(40);
    // q.enqueue(50);
    // q.enqueue(60);
    // q.enqueue(70);
    // q.enqueue(80);
    // cout << q.getSize() << endl;
    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;
    // cout << q.dequeue() << endl;

    // cout << q.front() << endl;
    // q.dequeue();
    // cout << q.front() << endl;
    // cout << q.getSize() << endl;
    // q.enqueue(200);
    // q.enqueue(100);
    // q.enqueue(3232);
    // q.enqueue(4343);



    QueueUsingLL<int>q;
    cout << q.front() << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout << q.getSize() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;



    
    
    

    return 0;
}