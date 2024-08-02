#include <iostream>
using namespace std;

class Student{
    static int totalStudents;
    public:
    int age;
    int marks = 90;
    
    //non static function i.e. belongs to object
    int getage(){
        return age;
    }

    //static function
    static int getTotalStudents(){
        return totalStudents;
    }

    Student(){
        totalStudents++;
    }
};

int Student :: totalStudents = 0;

int main(){
    Student s1, s2,s3;
    cout << s1.marks << endl;
    // cout << s1.totalStudents << endl; //doesn't give error
    // cout << Student :: totalStudents << endl;
    cout << Student :: getTotalStudents() << endl;

}