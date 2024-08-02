#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> v;
    vector<int> *vp = new vector<int>();
    v = {1,2,3,4,4,5,5};
    // int vs = v.begin(); // error .begin and .end returns a bidirectional iterator..
    // cout << v.begin() << " " << v.end(); 
    // v.push_back(11);
    // cout << v.at(0);
    // cout << vp->at(0);
    

    // v.push_back(1); 
    // v.push_back(2); 
    // v.push_back(3); 
    // v.push_back(4); 
    //push back will increase size if capacity is reached

    
    // cout << v[0] << " " << v[1] << " " << " " << v[2] << " " << v[3] << endl;
    // v[0] = 500;
    // cout << v[0] << " " << v[1] << " " << " " << v[2] << " " << v[3] <<" " <<  v[5] << endl;
    // cout << v.at(0) << " " << v.at(1) << " " << v.at(6) << endl;
    // v.pop_back();
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;
    // for (int i = 0; i < 100; i++){
    //     v.push_back(i);
    //     cout << v.size() << " " << v.capacity() << endl;
    // }
    return 0;
}