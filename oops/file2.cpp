class emp{
    public:
    int age;
    char name[100];
    private:
    float bonus = 45.545;
    public:
    
    float setbonus(float b, int pswd){
        if(pswd != 456){
            return bonus;
        }
        if(b < 0){
            return bonus;
        }
        bonus = b;
        return bonus;
    }
    void display(){
        cout << age << " " << name << " " << bonus << endl; 
    }

};