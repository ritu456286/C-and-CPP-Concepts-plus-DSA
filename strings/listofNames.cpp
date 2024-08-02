#include <iostream>
using namespace std;

int length(char name[]){
    int i = 0;
    while(name[i] != '\0'){
        i++;
    }
    return i;
}
int main(){
    int n = 5;
    char name[50];
    // gets(name);
    // int len = length(name);
    // cout << len;
    // int * p1 = new int;
    // char ** p = new char*[len];
    // int ** p = new int*[len];
    // char * p = new char[len];
    char ** p = new char*[n];
    for(int i = 1; i <= n; i++){
        cin.getline(name, 50);
        int len = length(name);
        // char * p = new char[len];
        // p = name;
        p[i] = new char[len];
        p[i] = name;
        cout << p[i] << endl;
        cout << length(p[i]) << endl;
    }
    delete p;


    return 0;
}