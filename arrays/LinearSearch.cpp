# include <iostream>
using namespace std;
int main(){
    int t,n, num;
    cin >> t; //t = testcases
    
    for (int i = 1; i <= t; i++){
        //t = test cases : input values t times.
        cin >> n; //n is size of array
        int arr[n];
        for (int i = 0; i < n ; i++){
            cin >> arr[i]; // inputting array values
        }
        cin >> num; //number to find in the array

        //linear searching for num in the array

        //LINEAR SEARCH HERE>>>
        int j = 0;
        while (j < n){
            if (arr[j] == num){
                cout << j << endl; // printing index of the first occurrence of num
                break;
           
            }
            j++;
    
        }
        // cout << j;
        if (j == n){
            cout << "-1" << endl; // printing -1 if number not found in the array
        }
    
    }
}