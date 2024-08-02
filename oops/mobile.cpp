#include <iostream>
using namespace std;


class Phone {
private:
    string company_name;
    string model;
    long number;
public:
    Phone(string company, string model, long number): company_name(company), model(model), number(number){}

    virtual void dial(long receiver){
        cout << "Called " << receiver << "via " << model << endl;
    }
};

class Camera {
public:
    void takePicture(){
        cout << "Camera took a picture" << endl;
    }
};

class MobilePhone: public Phone{
    // long contacts[];
public:
    Camera camera;
    MobilePhone(string company, string model, long number): Phone(company, model, number){}
};

class Landline: public Phone{
    using Phone::Phone;
};

int f(int x, int y= 5){
    return x * y;
}

int f(int x){
    return x * x;
}

int main(){
    cout << f(5, 6) << endl;

    // cout << f(5) << endl; //ambigous --> gives error
    
    // Landline lp("Reeetle", "1dsfs", 224342);
    // MobilePhone mp("Apple", "sfsd#53", 4324234);

    // mp.dial(59090);
    // mp.camera.takePicture();
    return 0;

}

