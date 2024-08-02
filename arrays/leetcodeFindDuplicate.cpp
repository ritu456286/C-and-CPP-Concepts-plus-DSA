# include <iostream>
using namespace std;
// given array having numbers from [1,n-1]. n is the size of array. one of the element is
// repeated. find that element.
//{1,2,3,5,5,4}=> 5 
//xor ing all the elements with [1,n-1] numbers....the number which is repeated will get left out.
int main() {
    int n;
    cout << "Enter value of n= ";
    cin >> n;

    // input array
    cout << "Enter array elements\n";
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int ans = 0;
    // XOR ing all the array elements 
    for (int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    // XOR ing all the array elements with the numbers from [1,n]...i.e. the number 
    //which is repeated will be left out.
    for (int i = 1; i < n; i++){
        ans = ans ^ i;
    }  
    cout << "Element which occurs twice is = " << ans;
}