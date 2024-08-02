#include <iostream>
#include <cmath>
using namespace std;
//41311,2
int min_dig(int N){
    int min = 9999;
    while (N != 0){
        if (((N % 10) < min) && (N % 10 != 0)){
            min = N % 10;
        }
        N /= 10;
    }
    return min;
}
int position(int dig, int N){
    int pos = 0;
    while (N != 0){
        if ((N % 10) == dig){
            break;
        }
        pos ++;
        N /= 10;
    }
    return pos;
}

int largestNum(int N, int K){

     
    for(int i = 0; i < K; i++){
        N = N - min_dig(N) * pow(10, position(min_dig(N), N));
    }

    
    return N;
}


int main(){
    cout << largestNum(41311, 2);
    return 0;
}