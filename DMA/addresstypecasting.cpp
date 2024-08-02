#include <iostream>
using namespace std;
int main(){
    int i = 65;
    // char c = i; //implicit typecasting now c contains A
    // cout << i << " " << c << endl;
    int *p = &i; //pointer p points to i which is of 4 bytes
    // char *pc = &c; //pointer pc points to charactr c which is of one byte
    // cout << *p << " " << *pc << endl ;
    // // char *pc1 = p; // ERROR : cannot convert implicitly int* to char*
    // // cout << *p << " " << *pc1 << endl;

    // //explicit typecasting 
    char *pc1 = (char*)p; //explicit typecasting pc1 points to first byte of the integer of four bytes
    cout << *pc1 << endl;
    cout << *(pc1 + 1 ) << endl; //pointer to 2nd byte of integer
    cout << *(pc1 + 2 ) << endl; //pointer to 3nd byte of integer
    cout << *(pc1 + 3 ) << endl; //pointer to 4th byte of integer

    // //in intel core processor bytes are stored using little endian system where bytes are reversed. i.e least significant byte's place has most significant byte and vice versa 
    // //in some other processors bytes are stored using big endian system
    
    // cout << p << endl; // integer pointers prints the address of the integer i
    // cout << pc1 << endl; //character pointer prints the actual value at the address till null character is found
    
    // char *str = "ABCD\0";
    // int * p2 = (int*)str;
    // cout << str << endl;

}