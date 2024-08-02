# include <iostream>
# include <vector>

// check if palindrome or not (case insensitive i.e. N == n)
using namespace std;
char toLower(char x){
    if (x >= 'a' && x <= 'z'){
        return x;
    }else{
        char ans = x - 'A' + 'a'; // here arithmetic operations are performed on ascii values.
        // char ans = x - 'a' + 'A';  // for lower to upper 
        return ans;
    }
    
}
bool checkPalindrome(char s[], int length){
    int start = 0;
    int end = length - 1;
    while (start <= end){
        cout << toLower(s[start]) << " " << toLower(s[end]) << endl;
        if (toLower(s[start]) == toLower(s[end])){
            
            start ++;
            end--;
        }else{
            return 0;
        }
    }
    return 1;
}

int lengthString(char name[]){
    int i = 0;
    for (; name[i] != '\0'; i++){

    }
    return i;
}
int main(){
    // input string
    // char name[20];
    // cout << "enter name ";
    // cin >> name;
    // int len = lengthString(name);
    // int ans = checkPalindrome(name, len);
    // cout << ans;
    // cout << toLower('n');
    char n[] = "ritu kansal";
    int len = sizeof(n)/ sizeof(char);
    cout << n << endl << len << endl;
    

    // char a = 'A';
    // char b = a << 1;
    // cout << b;
}