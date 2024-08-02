# include <iostream>
using namespace std;
int main(){
    char c;
    c=cin.get();
    int counta=0;
    int countn=0;
    int counts=0;
    while (c!='$'){
        if (c>='a' && c<='z'){
            counta++;
        }
        else if(c>='0' && c<='9'){
            countn++;
        }
        else{
            counts++;
        }
        c=cin.get();
    }
    cout<<counta<<" "<<countn<<" "<<counts;
}