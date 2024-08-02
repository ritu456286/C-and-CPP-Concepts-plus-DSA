# include <iostream>
using namespace std;
// given an array of length N = 2m + 1; which has exactly m 
//numbers which occur twice and 1 number which is unique. you have to find that 
//unique element.

//METHOD 1 
// int main () {
//     int m;
//     cout << "Enter value of m=  ";
//     cin >> m;
//     int n = 2*m + 1;
//     int arr[n];

//     //input array
//     cout << "Enter array elements= " << endl; 
//     for (int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
    
//     //checking for unique element in array
  
//     for (int i = 0; i < n; i++){
//         int count = 0;
//         for (int j = 0; j < n; j++){
//             if (arr[i] == arr[j]){
//                 count ++;
//             }
//         }
//         if (count == 1){
//             cout << arr[i];
//         }
//     }

// }

//METHOD 2: using XOR operator
// we know a^a = 0; a^0= a; also a^b^a= b;
int main() {
    int m;
    cout << "Enter value of m=  ";
    cin >> m;
    int n = 2*m + 1;
    int arr[n];

    //input array
    cout << "Enter array elements= " << endl; 
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //checking unique element in array
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans = ans^arr[i];
    }
    cout << ans;
}