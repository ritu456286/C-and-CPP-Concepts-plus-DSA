#include <iostream>
using namespace std;

class ComplexNumber{
    private:
    float real, imag;
    public:
    ComplexNumber(float real, float imag){
        this -> real = real;
        this -> imag = imag;
    }
    
    //printing complex number 
    void display(){
        if (imag > 0){
            cout << real << " + " << imag <<"j" << endl; 
        }else{
            cout << real << " " << imag << "j" << endl;
        }
    }

    //add two complex numbers and update the answer to c1
    void add(const ComplexNumber &c2){
        real = real + c2.real;
        imag = imag + c2.imag;
    }

    //multiply two complex numbers and update the answer to c2
    void mul(const ComplexNumber &c2){
        real = real * c2.real;
        imag = imag * c2.imag;
    }

};
int main(){
    ComplexNumber c1(3,-5);
    c1.display();
    ComplexNumber c2(5.3, 3.4);
    c2.display();

    // c1.add(c2);
    // c1.display();

    c1.mul(c2);
    c1.display();

    
    return 0;
}