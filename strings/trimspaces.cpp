#include <iostream>
using namespace std;
char * trim_Spaces(char *str){
    int i=0, j= 0;
    while(*(str+i) != '\0'){
        if(*(str+i) != ' '){
            *(str + j++) = *(str + i);
        }
        i++;
    }
    *(str + j) = '\0';
    return str;
    
}
int main(){
    char name[100];
    cin.getline(name, 100);
    cout << "Original string " << endl << name << endl;
    cout << "String after removing spaces " << endl << trim_Spaces(name) << endl; 

    return 0;
}