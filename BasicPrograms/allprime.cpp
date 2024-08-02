# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N= ";
    cin>>n;
    int number=2;
    while (number<=n){
        int d=2;
        bool divided=false;
        while (d<=(number/2)){
            if (number%d==0){
                divided=true;
                break;

            }
            d++;
        }
        if (!divided){
            cout<<number<<endl;
        }
        number++;
    }
}