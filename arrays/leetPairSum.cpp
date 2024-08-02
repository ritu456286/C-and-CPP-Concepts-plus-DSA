# include <iostream>
# include <vector>
# include <bits/stdc++.h>
using namespace std;
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
    int s;
    cin >> s;

    // declaring a vector ans in which the pairs of values will be pushed i.e. temp vector.
    vector < vector<int> > ans;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] + arr[j] == s){
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }

    //sorting the ans vector to print the pairs in sorted manner.
    sort(ans.begin(), ans.end());

    //printing the required pairs whose sum is equal to the the given sum.
    for (int i = 0; i < ans.size(); i++){
        cout << "[";
        for (int j = 0; j < 2; j++){
            cout << ans[i][j] << " ";
        }
        cout << "]" << endl;
    }
}