#include <iostream>
using namespace std;
class Hero{
    int health = 0;
     
    public:
    char level = 65;
    //default constructor
    Hero(){
        cout << " Default Constructor called" << endl;
    }
    //parametrized constructor
    Hero(int health) {
        cout << "Parameterized Constructor  called" << endl;
        this -> health = health;
    }

    //copy constructor
    Hero(Hero &t){
        cout << "Copy constructor called " << endl;
        health = t.health;
        level = t.level;
    }

    //destructor
    ~Hero(){
        cout << "Destructor called " << endl;
    }
    void display(){
        cout << health << " " << level << endl;
        cout << "this keyword contains address = " << this << endl;
    }

    void setHealth(int health){
        this->health = health;
    }
};

int main(){
    int health = 34;

    //statically accessing the constructor
    // Hero raju(health);
    Hero raju;
    raju.level = 65;
    raju.setHealth(health);
    raju.display();
    // cout << "Address of raju object is " << &raju << endl;

    // //dynamically accessing the parametrised constructor
    // Hero *h = new Hero(health);
    // h->display();
    // cout << "Address of h object is " << h << endl;

    // Hero *h1 = new Hero(); // this line will give error because no longer default constructor is available
    
    //copy constructor
    Hero ram = raju; //copy assignment operator (copy constructor is called )
    // ram = raju;
    Hero rahul(raju); //using copy constructor 
    Hero *rohit = new Hero(raju);
    Hero *raghu = new Hero(*rohit);
    
    rohit -> display();
    raghu -> display();
    ram.display();
    rahul.display();

    // raju.setHealth(55); //modifying raju doesn't affect either of ram or rahul
    // raju.display();
    // ram.display();
    // rahul.display();

    delete rohit;
    delete raghu;

    return 0;
}