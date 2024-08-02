#include <iostream>
using namespace std;

class tridiagonal{
    int *A;
    int n;

    public:
    tridiagonal(int n){
        this -> n = n;
        A = new int[3 * n - 2];
    }

    void set(int ele, int i, int j){
        int index = 0;
        if (abs(i - j) > 1){
            return;
        }
        if (i - j == 1){
            //LOWER DIAGONAL
            index = i - 2;
        }
        else if (i == j){
            //MAIN DIAGONAL
            index = n - 1 + i - 1;
            A[index] = ele;
        }else{
            //UPPER DIAGONAL
            index = n - 1 + n + i - 1;
        }
        A[index] = ele;
    }

    int get(int i, int j){
        int index = 0;
        if (abs(i - j) > 1){
            return 0;
        }
        if (i - j == 1){
            //LOWER DIAGONAL
            index = i - 2;
        }
        else if (i - j == 0){
            //MAIN DIAGONAL
            index = n - 1 + i - 1;
        }else{
            //UPPER DIAGONAL
            index = n - 1 + n + i - 1;
        }
        return A[index];
    }

    void display(){
        int index = 0;
        for (int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if (abs(i - j) > 1){
                    cout << 0 << " ";
                }else{
                    if(i - j == 1){
                        index = i - 2;
                        cout << A[index] << " ";
                    }else if(i - j == 0){
                        index = n - 1 + i - 1;
                        cout << A[index] << " ";
                    }else{
                        index = n - 1 + n + i - 1;
                        cout << A[index] << " ";
                    }
                }
            }
        }
    }

};
int main(){
    int n;
    cout << "Enter dimension: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            
        }
    }

    return 0;
}