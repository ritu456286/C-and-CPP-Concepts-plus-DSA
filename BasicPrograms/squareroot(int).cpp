# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n= ";
    cin>>n;
    int i=1;
    while(i*i<=n){
        i++;
    }
    cout<<"square root= "<<i-1;
}