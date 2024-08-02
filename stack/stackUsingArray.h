#include <iostream>
using namespace std;
// #include <limits.h>
#include <climits>
template <typename T>
class StackUsingArray{
    T * data;
    int nextIndex;
    int capacity;
    public:

    StackUsingArray(){
        capacity = 5;
        data = new T[capacity];
        nextIndex = 0;
    }

    //return the number of elements in my stack
    int size(){
        return nextIndex;
    }

    //return the topmost element in my stack
    T top(){
        if(isEmpty()){
            cout << "Stack is Empty" << endl;
            return 0;
        }
        return data[nextIndex - 1];
    }

    //returns t/f if stack is empty;
    bool isEmpty(){
        // return bool(!size());
        return nextIndex == 0;
    }

    //push the element into the stack
    void push(T ele){
        //dynamic array
        if(nextIndex == capacity){
            T * newData = new T[2*capacity];
            for(int i = 0; i < capacity; i++){
                newData[i] = data[i];
            }
            capacity *= 2;
            delete [] data;
            data = newData;
        }
        *(data + nextIndex) = ele;
        nextIndex++;
    }

    //delete the element
    T pop(){

        if(isEmpty()){
            cout << "Stack is empty" << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];

    }
};


// int main(){
//     StackUsingArray<int> s;
//     StackUsingArray<char> s1;

//     for (int i = 1; i< 5; i++){
//         s.push(i);
//     }
//     for(char i = 'a' ; i <'f'; i++){
//         s1.push(i);
//     }
//     for (int i = 1; i< 5; i++){
//         cout << s.pop() << endl;
//     }
//     for(char i = 'a' ; i <'f'; i++){
//         cout << s1.pop() << endl;
//     }




    // cout << s.isEmpty() << endl;
    // cout << s.top() << endl;
    // cout << s.size() << endl;
    // cout << s.pop() << endl;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    // s.push(60);
    // s.push(70);
    // cout << s.size() << endl;
    // cout << s.isEmpty() << endl;
    // cout << s.top() << endl;
    // cout << s.pop() << endl;
    // cout << s.isEmpty() << endl;


//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);
//     s.push(70);

//     cout << s.top() << endl;
//     cout << s.pop() << endl;
//     cout << s.top() << endl;
    

//     return 0;
// }