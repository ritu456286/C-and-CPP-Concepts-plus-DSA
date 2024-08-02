#include <iostream>
using namespace std;

class Upper{
    int *A;
    int n;
    public:

    Upper(int n){
        this -> n = n;
        A = new int[(n*(n+1))/2];
    }

    void set(int i, int j, int value){
        if(i > j){
            return;
        }
        int index_by_row = ((i-1)/2)*((2*n) - (i-2)) + j-i;
        A[index_by_row] = value;

    }

    int get(int i , int j){
        if(i > j){
            return 0;
        }
        int index_by_row = ((i-1)/2)*(2*n - (i-2)) + (j-i);
        return A[index_by_row];
    }

    void display(){
        
        for(int i= 1 ;i<= n; i++){
            for(int j = 1; j <= n; j++){
                int index_by_row = ((i-1)/2)*(2*n - (i-2)) + (j-i);
                if (i > j){
                    cout << 0 << " ";
                }else{
                    cout << A[index_by_row] << " ";
                }

            }
            cout << endl;
        }
    }
};
int main(){
    int n, ele;
    
    cout << "Enter dimensions : ";
    cin >> n;
    Upper matrix(n);
    for(int i = 1; i <=n; i++){
        for(int j= 1; j <= n; j++){
            cin >> ele; 
            matrix.set(i,j,ele);
        }
    }
    matrix.display();
    return 0;
}