# include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[50];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int large = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > large){
            large = arr[i];
        }
    }
    cout << "Largest element = " << large;
}