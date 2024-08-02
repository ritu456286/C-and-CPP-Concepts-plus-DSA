# include <iostream>
# include <math.h>
using namespace std;
int main(){
    // cout << "hello world" << endl;
    int size_of_array, sum = 0;
    cin  >> size_of_array;
    int arr[size_of_array];
    for (int i = 0; i < size_of_array ; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "sum is = " << sum << endl;
    return 0;
}
