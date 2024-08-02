#include <iostream>
using namespace std;

template <typename T>
class QueueUsingArray{
    T * data;
    int size;
    int capacity;
    int nextIndex;
    int firstIndex;

    public:
    QueueUsingArray(int s){
        data = new T[s];
        size = 0;
        capacity = s;
        nextIndex = 0;
        firstIndex = -1;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }

    //insert an element
    void enqueue(T element){
        if(size == capacity){
            // cout << "Queue is Full!" << endl;
            T * newData = new T[2*capacity];

            //MY METHOD : 
            // int temp = firstIndex;
            // int j = 0;
            // while(1){
            //     newData[j] = data[temp];
            //     temp = (temp + 1)%capacity;
            //     j++;
            //     if(temp == firstIndex){
            //         break;
            //     }
            // }


            //MA'AM'S METHOD
            int j = 0;
            for(int i = firstIndex; i < capacity; i++){
                newData[j] = data[i];
                j++;
            }

            for(int i = 0; i < firstIndex; i++){
                newData[j] = data[i];
                j++;
            }
            delete []data;
            data = newData;
            nextIndex = capacity;
            capacity *= 2;
            firstIndex = 0;
          
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if(firstIndex == -1){
            firstIndex = 0;
        }
        size++;
        return;
    }
    //access the first element
    T front(){
        if (firstIndex == -1){    //if(isEmpty()){...}
            cout << "Queue is Empty" << endl;
            return 0;
        }
        return data[firstIndex];
        
    }

    //delete first element
    T dequeue(){
        if(isEmpty()){
            cout << "Queue is Empty" << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size --;
        if(size == 0){
            firstIndex = -1;
            nextIndex = 0;
        }
        return ans;

    }
};

    