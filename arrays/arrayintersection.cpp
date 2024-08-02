# include <iostream>
using namespace std;
//not giving desired output
int main() {
    int arr[6] = {1,2,2,5,6,5};
    int brr[7] = {1,121,12,5,3,3,2};
    bool visited[7] = {false};
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 7; j++){
            if (arr[i] == brr[j]){
                brr[j] = true;
                cout << arr[i] << endl;
                break;
            }
        }
    }
}