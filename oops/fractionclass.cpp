#include <iostream>
using namespace std;
class Fraction{
    private:
    int numerator, denominator;
    public:
    //setting the values of denominator and numerator
    Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }

    //copy constructor
    Fraction(const Fraction &t){
        cout << "Copy constructor called" << endl;
        this->numerator = t.numerator;
        this->denominator = t.denominator;
    }

    //get numerator
    int getnumerator() const{
        return numerator;
    }

    //get denominator
    int getdenominator() const{
        return denominator;
    }

    //setnumerator(not a constant fuunction as it changes the value of numerator)
    void setnumerator(int n){
        numerator = n;
    }

    //setdenominator
    void setdenominator(int d){
        denominator = d;
    }

    //printing the fraction(it doesn't alter any data members therefore it can be marked as constant function)
    void display() const{

        cout << numerator << "/" << denominator << endl;
    }

    //simplify fraction
    void simplify(){
        int min = (numerator < denominator ? numerator : denominator);
        int hcf = 1;
        for (int i = min; i >= 1; i--){
            if(numerator % i == 0 && denominator % i == 0){
                hcf = i;
                break;
            }
        }
        numerator = numerator / hcf;
        
        denominator = denominator / hcf;
    } 

    //add two fractions and update the answer to this fraction 
    Fraction add(const Fraction &f2) const{
        //LCM of denominators of f1 and f2
        int d1 = denominator;
        int d2 = f2.denominator;
        int max = (d1 > d2 ? d1 : d2 );
        int lcm = max;
        while(true) {
            
            if(lcm % d1== 0 && lcm % d2 == 0){
                break;
            }
            lcm = lcm + max;
        }
        int x = lcm / d1;
        int y = lcm / d2;
        // numerator = (x * this->numerator) + (y * f2.numerator);
        // d1 = lcm;
        int n1 = (x * this->numerator) + (y * f2.numerator);
        Fraction fNew(n1, d1);
        fNew.simplify();
        return fNew;
    }

    //operator overloading for + operator
    Fraction operator+(const Fraction &f2) const{
        //LCM of denominators of f1 and f2
        int d1 = denominator;
        int d2 = f2.denominator;
        int max = (d1 > d2 ? d1 : d2 );
        int lcm = max;
        while(true) {
            
            if(lcm % d1== 0 && lcm % d2 == 0){
                break;
            }
            lcm = lcm + max;
        }
        int x = lcm / d1;
        int y = lcm / d2;
        // numerator = (x * this->numerator) + (y * f2.numerator);
        // d1 = lcm;
        int n1 = (x * this->numerator) + (y * f2.numerator);
        Fraction fNew(n1, lcm);
        fNew.simplify();
        return fNew;
    }

    //+= operator overaloading
    Fraction& operator+=(const Fraction &f2){
        *this = *this + f2;
        return *this;
    }



    //multiply two fractions using operator * and return new fraction
    Fraction operator*(const Fraction &f2) const{
        // numerator = numerator * f2.numerator;
        // denominator = denominator * f2.denominator;
        int num = numerator * f2.numerator;
        int deno = denominator * f2.denominator;;
        Fraction fNew(num, deno);
        fNew.simplify();
        return fNew;
    }

    //to check whether two fractions are equal or not
    bool operator==(const Fraction &f2) const{
        return (numerator == f2.numerator && denominator == f2.denominator);
    }
    
    //pre-increment operator overloading
    //returning the fraction by reference prevents making a buffer and hence all the pre-increments on a fraction gets reflected
    Fraction& operator++(){
        numerator = numerator + denominator;
        simplify();
        return *this;

    }

    //post-increment operator(note: post-incement operators do not support nesting i.e. (i++)++ gives erro)
    Fraction operator++(int){
        Fraction fNew(numerator, denominator);
        numerator = numerator + denominator;
        simplify();
        fNew.simplify();
        return fNew;

    }
};

int main(){
    Fraction f1(10, 2);
    Fraction f2(10, 2);
    // f1.display();
    // f2.display();
    // f2.add(f1);
    // f2.display();
    // f2.mul(f1);
    // f2.display();
    // Fraction f3 = f1.add(f2);
    // f3.display();
    // Fraction f4 = f1 + f2;
    // f4.display();
    // Fraction f5 = f1*f2;
    // f5.display();
    // bool ans = f1 == f2;
    // cout << ans << endl;
    // Fraction const f6 = f1 + f2;
    // f6.display();
    // Fraction const f7 = f6.add(f1);
    // f7.display();

    // const Fraction f3(9,4); //constant objects can call only constant functions
    // cout << f3.getdenominator() << endl;
  
    
    // Fraction f9 = ++(++f2);
    // f9.display();
    // f2.display();

    // Fraction f = f2++;
    // f2.display();
    // f.display();

    (f1 += f2) += f2;
    f1.display();
    f2.display();

    return 0;
}