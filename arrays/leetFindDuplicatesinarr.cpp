# include <iostream>
using namespace std;
// given integer array of length n, which contains numbers in range [1,n]. 
//Each number can either occur twice or once. Return an array of integers which occured twice 
//in the given array.
//INCOMPLETE

//METHOD 1 : counting frequency of all elements.
int main() {
    
    //inputting an array
    int n;
    cout << "Enter size of array = ";
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }

    // mark every element as visited.
    bool visited[n] = {false};
    
    //counting frequecy of each element.
    for (int i = 0; i < n; i++){
        int count = 1;

        //if already visited, skip the element.
        if (visited[i]){
            continue;
        }

        //else check for duplicates.
        for (int j = i+1; j < n; j++){

            //if duplicate found increment count.
            if (nums[i] == nums[j]){
                visited[j] = true;
                count ++;
            }            
        }

        // printig elements that occur twice.
        if (count == 2){
            cout << nums[i] << " ";
        }    
    }
}

