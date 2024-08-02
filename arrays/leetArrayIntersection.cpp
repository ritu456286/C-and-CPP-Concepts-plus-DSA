# include <iostream>
using namespace std;
//given two array of different sizes.Both are sorted in non-decreasing order.
//find common elements and print them in the same order as they occurred in the arrays.
// int main() {
//     int arr[8] = {1,2,2,3,3,3,4,12};
//     int brr[5] = {0,1,2,3,9};
//     bool visited[5] = {false};
//     for (int i = 0; i < 8; i++){
//         for (int j = 0; j < 5; j++){
//             if (visited[j]){
//                 continue;
//             }
//             if (arr[i] < brr[j]){
//                 break;
//             }
//             if (arr[i] == brr[j]){
//                 visited[j] = true;
//                 cout << arr[i] << " ";
//                 break;
//             }
//         }
//     }
// }

//method 2 : using two pointer approach (best method least runtime)
int main(){
    int arr[8] = {1,2,2,3,3,3,4,12};
    int brr[5] = {0,1,2,3,9};
    // vector<int> ans;
    int i = 0, j = 0;
    while (i < 8 && j < 5){
        if (arr[i] == brr[j]){
            cout << arr[i] << " ";
            i++;
            j++;
        }else if (arr[i] < brr[j]){
            i++;
        }else{
            j++;
        }
    }
}
