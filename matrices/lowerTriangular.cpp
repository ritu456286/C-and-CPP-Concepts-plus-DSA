#include <iostream>
using namespace std;

class Lower{
    int n;
    int *A;

    public:
    Lower(int n){
        this->n =  n;
        A = new int[(n*(n-1))/2];
    }

    void set(int i, int j, int value)
    {   
        
        
        int index_by_row = ((i - 1)*i)/2 + (j-1);
        int index_by_col = ((j-1)/2)*(2*(n)-(j-2)) + (i-j);
        if(i<j){
            return;

        }
        // A[index_by_row] = value;
        A[index_by_col] = value;
        
    }

    int get(int i, int j)
    {   
        int index_by_row = ((i - 1)*i)/2 + (j-1);
        int index_by_col = ((j-1)/2)*(2*(n)-(j-2)) + (i-j);
        if(i<j){
            return 0;
        }
        // return m->A[index_by_row];
        return A[index_by_col];
    }
    
    void display(){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j<=n; j++){
                if(i < j){
                    printf("0\t");
                }else{
                    int index_by_row = ((i - 1)*i)/2 + (j-1);
                    int index_by_col = ((j-1)/2)*(2*(n)-(j-2)) + (i-j);
                    // printf("%d\t", m->A[index_by_row]);
                    printf("%d\t", A[index_by_col]);
                }
            }
            printf("\n");
        }
    }
    ~Lower(){
        delete A;
    }
};





int main(){
    Lower matrix(4);
    matrix.set(1,1,45);
    matrix.set(1,2,45);
    matrix.set(2,2,55);
    matrix.set(2,3,55);
    matrix.set(2,1,55);
    matrix.set(3,1,65);
    matrix.set(3,2,65);
    matrix.set(3,3,65);
    matrix.set(4,1,75);
    matrix.set(4,4,75);
    matrix.set(4,2,75);
    matrix.set(4,3,75);
    cout << matrix.get(2,2) << endl;
    matrix.display();


    return 0;
}