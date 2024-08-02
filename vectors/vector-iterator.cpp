#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v = {20,30,40,50,60, 2323};
    vector<int>::iterator it = v.begin();
    vector<int>::iterator it2 = v.end();
    // cout << v.pop_back(); // error as it doesn't return anything
    cout << v.back() << " ";
    cout << *(it2) << " " << *(--it2) << endl;
    //v.begin is pointing to the memory where first element's address.
    cout << *(it) << " " << *(it + 1) << " ";
    it++;
    cout << *(it);
}