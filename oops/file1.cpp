#include <iostream>
using namespace std;
#include "file2.cpp"
#include <cstring>
class student{
    public:

    int name;
    int age;
    
}s4;
student s2;
int main(){
    student s1, s2;
    //statically allocating objects
    s1.name = 34;
    cout << s1.name << endl;

    //dynamically allocation of objects
    student *s3 = new student;
    (*s3).age = 34;
    s3 ->name = 90;
    cout << s3->age << " " <<s3->name << endl;

    //using class defined in file 2
    emp e1;
    e1.age = 34;
    char arr[100] = "hello python";
    strcpy(e1.name, arr);
    cout << e1.age << " " << e1.name << endl;
    // e1.bonus = 324.432;//private gives error
    emp *e2 = new emp;
    // e2->name= "Rahul gandhi";
    e2->age = 34;
    char narr[100] =   "Hello jesus";
    strcpy(e2->name, narr);
    cout << e2->age << " " << e2->name << endl;


    //getters and setters
    e2->display(); //here i can get value of private attribute bonus using functions(getters)
    
    cout << e2->setbonus(12.343, 345) << endl; //here i cannot set  and get different value of private attribute bonus using functions(incorrect pswd)(setters + getters)
    cout << e2->setbonus(12.343, 456) << endl; //here i can set  and get different value of private attribute bonus using functions(setters + getters)
    
    e2->display();
    delete s3;
    delete e2;

    return 0;
}