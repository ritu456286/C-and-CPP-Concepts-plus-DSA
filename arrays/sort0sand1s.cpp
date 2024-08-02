# include <iostream>
using namespace std;

// sort the array containing zeroes and ones  and 2s only.
//METHOD 1 : BUBBLE SORT
// int main(){
//     // inputting array and the sum value to check;
//     int n ;
//     cout << "Enter size of array = ";
//     cin >> n;
//     cout << "Enter elements of array.\n";
//     int arr[n];
//     for (int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i ++){
//         for ( int j = i+1; j < n; j++){
//             if ( arr[i] > arr[j]){
//                 swap (arr[i], arr[j]);
//             }
//         }
//     }
//     // printing array elements
//     for (int i = 0; i < n; i++){
//         cout << arr[i] <<" ";
//     }
// }

//METHOD 2 : 
// int main(){
//     int count_0 = 0, count_1 = 0;
//     // inputting array ;
//     int n ;
//     cout << "Enter size of array = ";
//     cin >> n;
//     cout << "Enter elements of array.\n";
//     int arr[n];
//     for (int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++){
//         if (arr[i] == 0){
//             count_0 ++;
//         }
//     }
//     count_1 = n - count_0;
//     // cout << count_0 << " " << count_1 << endl;;
//     int brr[n];
//     for (int i = 0; i < count_0; i++){
//         brr[i] = 0;
        
//     }
//     for (int i = count_0; i < n; i++){
//         brr[i] = 1;
//     }
//     //printing array elements;
//     for (int i = 0; i < n; i++){
//         cout << brr[i] << " ";
//     }

// }

// METHOD 3 (best) : 2 pointer technique
int main () {
    // inputting array ;
    int n ;
    cout << "Enter size of array = ";
    cin >> n;
    cout << "Enter elements of array.\n";
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int i = 0, j = n - 1;
    while ( i < j){
        //to see the last leftmost 0
        while ( arr[i] == 0 && i < j){
            i++;
        }
        // to see the last rightmost 1
        while ( arr[j] == 1 && i < j){
            j--;
        }
        if (i < j){
            arr[i] = 0;
            arr[j] = 1;
            i++;
            j--;
        }
    }
    //printing array elements;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
