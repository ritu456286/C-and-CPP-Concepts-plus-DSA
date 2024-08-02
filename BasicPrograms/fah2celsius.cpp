# include <iostream>
using namespace std;
int main(){
    int S,E,W;
    cin >> S;
    cin >> E;
    cin >> W;
    for (;S<=E;S=S+W){
        int C = (S-32)*5/9;
        cout << S << "\t" << C << endl; 
    }

}