#include <iostream>
using namespace std;
template <typename T, typename V>
class Pair{
    T x;
    // V V; template name and variable name should not be same, it gives unexpected errors
    V y;

    public:
    T getX(){
        return x;
    }

    void setX(T x){
        this -> x = x;
    }

    V getY(){
        return y;
    }

    void setY(V y){
        this -> y = y;
    }

};

int main(){
    // Pair <int, double> p1;
    // Pair <Pair<int, double>, char> p2; 

    // p1.setX(45);
    // p1.setY(45.56);

    // p2.setX(p1);
    // p2.setY('D');

    // cout << p1.getX() << endl;  
    // cout << p1.getY() << endl;  
    // cout << p1.getX() << endl;  
    // cout << p2.getX().getX() << " " << p2.getX().getY() << " " << p2.getY() << endl;  
    // cout << p2.getY() << endl;  


    Pair<int, double> p3;
    p3.setX(2);
    cout << p3.getX() << endl;

    p3.setY(45.45);
    cout << p3.getY() << endl;
    return 0;
}