# include <iostream>
using namespace std;
// METHOD 1
// int main(){
//     int n;
//     cout<<"Enter n= ";
//     cin>>n;
//     int r=n%10;
//     if (n!=0){
//         while (r==0){
//             n=n/10;
//             r=n%10;
//         }
//         int temp=n;
//         while(temp!=0){
//             r=temp%10;
//             cout<<r;
//             temp=temp/10;
//         }   
//     }
//     else{
//         cout<<n;
//     } 
// }

//METHOD 2
int main(){
    int n;
    cout<<"Enter n= ";
    cin>>n;
    int rev=0;
    while (n!=0){
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<<rev;
}