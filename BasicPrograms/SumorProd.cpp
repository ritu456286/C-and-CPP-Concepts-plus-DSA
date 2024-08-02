#include <iostream>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    cin>>c;
    
    if (c==1){
        int i=1;
        int sum=0;
        while (i<=n){
            sum=sum+i;
            i++;
        }
        cout<<sum;
    }
    else if (c==2){
        int prod=1;
        int i=1;
        while(i<=n){
            prod=prod*i;
            i++;
        }
        cout<<prod;
    }
    else{
        cout<<"-1";
    }
}