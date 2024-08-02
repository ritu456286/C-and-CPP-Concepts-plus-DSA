//Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
# include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter x= ";
    cin>>x;
    int n=1;
    int count=1;
    while(count<=x){
        int exp=3*n+2;
        if (exp%4!=0){
            cout<<exp<<" ";
            count++;
        }
        n++;
        
    }
}