#include <iostream>
using namespace std;
class toeplitz{
    int * A;
    int n;
    
    public:

    toeplitz(int n){
        this->n = n;
        A = new int[2 * n - 1];
    }

    void set(int ele, int i, int j){
        int index = 0;
        if (i > j){
            //LOWER TRIANGULAR
            index = n + i - j - 1;
            A[index] = ele;
        }else{
            //UPPER TRIANGULAR
            index = j - i;
            A[index] = ele;  
        }
    }

    int get(int i, int j){
        int index = 0;
        if (i > j){
            index = n + i - j - 1;
            return A[index];
        }
        index = j - i;
        return A[index];
    }

    void display(){
        for (int i = 0; i < n; i++){
            for(int j = 0 ; j < n; j++){
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }

    ~toeplitz(){
        delete []A;
    }
};
int main(){
    int n;
    cout << "Enter dimension: ";
    cin >> n;
    toeplitz tp(n);
    int ele = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           cin >> ele;
           tp.set(ele, i, j);
        }
    }

    cout << endl;
    tp.display();
    return 0;
}