# include <iostream>
using namespace std;
int findOdd(int arr[],int n ){
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    return ans;

}
int main() {
    int arr[] = { 12, 12, 14, 90, 14, 14, 14 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The odd occurring element is  "<< findOdd(arr, n);
    return 0;

}