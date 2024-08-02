# include <iostream>
# include <vector>
# include <bits\stdc++.h>
using namespace std;

//METHOD 1 (SIMPLEST): using three nested loops 
// int main(){
//      // inputting array and the sum value to check;
//     int n ;
//     cout << "Enter size of array = ";
//     cin >> n;
//     cout << "Enter elements of array.\n";
//     int arr[n];
//     for (int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     cout << "Enter value of Sum to check = ";
//     int K;
//     cin >> K;
    
//     for (int i = 0; i < n; i++){
//         for (int j = i+1; j < n; j++){
//             for (int k = j+1; k < n; k++){
//                 if (arr[i] + arr[j] + arr[k] == K){
//                     cout << "[" << arr[i] << ", " << arr[j] << ", " << arr[k] << "]" << endl;
//                 }
//             }
//         }
//     }
// }

//METHOD 2 (EFFICIENT METHOD ): using two pointer technique and sorting the array..

/*Algorithm :
 
Sort the given array.
Loop over the array and fix the first element of the possible triplet, arr[i].
Then fix two pointers, one at i + 1 and the other at n – 1. And look at the sum, 
If the sum is smaller than the required sum, increment the first pointer.
Else, If the sum is bigger, Decrease the end pointer to reduce the sum.
Else, if the sum of elements at two-pointer is equal to given sum then print the triplet and break.*/

int main() {
    // inputting array and the sum value to check;
    int n ;
    cout << "Enter size of array = ";
    cin >> n;
    cout << "Enter elements of array.\n";
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter value of Sum to check = ";
    int K;
    cin >> K;

    sort(arr, arr + n);
    int i = 0, j = i+1, k = n-1;
    while (i < n-2){
        // int j = i+1, k = n-1;
        while ( j < k){
            if ( arr[j] + arr[k] + arr[i] < K){
                j++;
            }else if (arr[j] + arr[k] + arr[i] > K){
                k--;
            }else{
                cout << arr[j] << " " << arr[k] << " " << arr[i] << endl;
                break;
            }
        }
        i++;
    }
    
}