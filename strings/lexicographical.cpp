

#include <bits\stdc++.h> // for sort -->  O(nlogn)
using namespace std;

void lexicographical(vector<string>& names){
    sort(names.begin(), names.end());
    //enhanced for loop
    for (auto name : names){
        cout << name << ",";
    }
    cout << endl;
}
int main(){
    vector<string> names = {"rahul", "abcdef", "zebra", "xman", "abc"};
    lexicographical(names);
    for (auto name : names){
        cout << name << ",";
    }
    cout << endl;
    string myname = "abxedfg";
    sort(myname.begin(), myname.end());
    cout << myname << endl;
    bool val = 'a' < 'b';
    cout << val << endl;
    return 0;
}