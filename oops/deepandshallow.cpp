#include <iostream>
using namespace std;
#include <cstring>

class Student{
    int age;
    char *name;
    public:
    Student(int age, char * name){
        this -> age = age;
        //shallow copy (Avoided)
        // this -> name = name;
        //deep copy
        this -> name = new char[strlen(name) + 1];
        strcpy(this -> name, name);
    }

    //Copy Constructor
    Student(const Student &s){
        this -> age = s.age;
        //shallow copy (Avoided)
        // this -> name = s.name;
        //deep copy
        this -> name = new char[strlen(s.name) + 1];
        strcpy(this -> name, s.name);
    }
    void display(){
        cout << name << " " << age << endl;
    }

};
int main(){
    char name[] = "Rahul";
    Student s1(20, name);
    s1.display();
    Student s2(s1); //by deafult copy constructor does shallow copy
    s2.display();
    name[0] = 'x';
    s1.display();
    s2.display();
   

    return 0;
}