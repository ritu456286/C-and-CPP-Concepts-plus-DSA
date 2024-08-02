#include <iostream>
#include <string>
using namespace std;

void replaceChar(char * str, char c1, char c2){
    while(*str != '\0'){
         if(*str == c1){
            // cout << *str << endl;
            *str = c2;
            // cout << "changed " << endl;
            // cout << *str <<  endl;
        }
        str++;
    }
}

int length(char name[]){
    int len = 0;
    for (int i = 0; name[i] != '\0'; i++){
        len ++;
    }
    return len;
}
int main(){
    // string name;
    // getline(cin, name);
    char  name[100];
    // cin >> name; //just one word inout
    // scanf("%[^\n]s", name); //multi word input

    // cout << name << endl;
    gets(name);
    cout <<"Your name is " <<  name << endl;
    cout <<"Length of your name is " << length(name) << endl;

    char c1, c2;
    cout << "Enter c1 to be replaced in name : ";
    
    cin >> c1;
    // cout << c1 << endl;
    cout << "Enter c2 to be replaced in name : ";
    cin >> c2;
    // cout << c2 << endl;

    replaceChar(name, c1,c2);
    cout << "After replacing is " << name << endl;



    
}