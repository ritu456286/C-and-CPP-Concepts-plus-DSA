#include <iostream>
using namespace std;
#include <cstring>

class Shape{
    public : 
    int height;
    int width;
    char name[20];
    Shape(Shape &t){
        cout << "Copy constructor called " << endl;
        height = t.height;
        width = t.width;
        strcpy(name, t.name);
    }
    Shape(){
        cout << "Defaul constructor called "<< endl;
    }
};
class Hello{
    private:
    ~Hello(){
        cout << "Private destructor called " << endl;
    }
    public:
    Hello(){
        cout << "Default constructor called "<< endl;
    }
};

// int main() {
    // Shape *s = new Shape(); //its calling the constructor
    // Shape *s1 = new Shape[5];
    // (s1+1)->height = 3;
    // char n[20] = "Hello";
    // strcpy((s1+1)->name, n);
    // (s1+1)->width = 4;
    // cout << (s1+1)->height << endl;
    // cout << (s1+1)->width << endl;
    // cout << (s1+1)->name << endl;

    // s -> height = 1;
    // cout << s -> height;
    // Shape s2;
    // Shape s3;
    // s3 = s2; 
    // Shape s4(s2);
    // Hello h1;
// }
class Student {
    public :

    int rollNumber;
    static int totalStudents;

    Student() {
        totalStudents++;
    }
};

int Student::totalStudents = 20;

int main() {
    // Student s1, s2, s3, s4;
    // cout << Student :: totalStudents;
    // int i = 5;
    // int j = (i++)++;
    // cout << j << i << endl;
    // int a = 8 == 7 + 7 == 7;
    // cout << a;
    int n;
    cin >> n;
    int count = 0;
    for(int i = n; i>= 1; i /= 2){
        for(int j = 1; j <= i; j++){
            count++;
        }
    }
}
