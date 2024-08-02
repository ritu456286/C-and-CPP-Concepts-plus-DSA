#include <iostream>
using namespace std;
class Student{
    int marks; 
    const int rollno;
    int &x;

    //to initialize reference variable or constant variables we need to use constructors with initialization list
    public:
    Student(int rollno, int marks = 0) : rollno(rollno), x(marks), marks(marks){  }

    void display(){
        cout << rollno << " " << x << endl;
    }

    int getrollno() {return rollno;}
    int getmarks(){return x;}
};
int main(){
    Student s1(20, 199);
    s1.display();
    cout << s1.getrollno() << endl; 
    cout << s1.getmarks() << endl; 
    return 0;
}

