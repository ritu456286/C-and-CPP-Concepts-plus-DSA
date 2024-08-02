#include <iostream>
using namespace std;
class DynamicArray{
    int capacity;
    int * data;
    int nextIndex;

    public:
    DynamicArray(){
        capacity = 5;
        data = new int[capacity];
        nextIndex = 0;
    }

    DynamicArray(DynamicArray const &t){ //copy constructor
        capacity = t.capacity;
        nextIndex = t.nextIndex;
        data = t.data; //shallow copy
        //deep copy
        data = new int [t.capacity];
        for(int i = 0; i < t.nextIndex; i++){
            data[i] = t.data[i];
        }
    }
    
    void operator=(DynamicArray const &t){
        this -> data = new int[t.capacity];
        for(int i = 0; i < t.nextIndex; i++){
            this -> data[i] = t.data[i];
        }
        this -> nextIndex = t.nextIndex;
        this -> capacity = t.capacity;
    }

    void add(int ele){
        if(nextIndex == capacity){
            int *newData = new int[2*capacity];
            for(int i = 0; i < capacity; i++){
                newData[i] = data[i];
            }
            delete [] data; 
            data = newData;
            capacity *= 2;   
        }
        data[nextIndex] = ele;
        nextIndex++; 
    }

    int getelement(int index) const{
        if(index < nextIndex && index >= 0){
            return data[index];
        }
        else{
            return -1;
        }      
    }

    void add(int element, int index){
        if(index < nextIndex){
            data[index] = element;
        }
        else if(index == nextIndex){
            add(element);
        }else{
            return;
        }
    }
    
    void print() const{
        for(int i = 0; i < nextIndex; i++){
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    DynamicArray array;
    array.add(10);
    array.add(20);
    array.add(30);
    array.add(40);
    array.add(50);
    array.add(60);
    cout << array.getelement(-2) << endl;
    DynamicArray d2(array);
    DynamicArray d3 = array;
    array.add(45,0);
    array.print();
    d2.print();
    d3.print();
}