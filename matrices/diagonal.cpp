#include <iostream>
using namespace std;

class Diagonal{
    int n;  
    int *A;
    public:
    Diagonal(int n){
        this -> n = n;
        A = new int[n];
    }
    int get(int i, int j){
        if(i == j){
            return A[i-1];
        }else{
            return 0;
        }
    }
    void set(int ele, int i, int j){
        if(i == j){
            A[i-1] = ele;
        }else{
            return;
        }
    }

   
    ~Diagonal(){
        delete[]A;

    }
    void display();

    //can use the funciton inside the class only or outside the class by the resolution operator
    
    /*void display(){
        for(int i = 0; i < n; i++){

            for(int j= 0;j<n;j++){
                if(i== j){
                    cout << A[i] << " ";
                }else{
                    cout << 0 << " ";
                }
                
            }
            cout << endl;
        }
            
    }*/
};

void Diagonal :: display(){
    for(int i = 0; i < n; i++){

        for(int j= 0;j<n;j++){
            if(i== j){
                cout << A[i] << " ";
            }else{
                cout << 0 << " ";
            }
            
        }
        cout << endl;
    }
}
    
    

int main(){
    Diagonal d(4);
    d.set(3,4,4);
    d.set(3,1,1);
    d.set(3,2,2);
    d.set(3,3,3);
    d.display();
    return 0;
}