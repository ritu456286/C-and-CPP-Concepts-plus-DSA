# include <iostream>
using namespace std;
// int main() {
//     int a = 1;
//     int b = 2;
//     if (a-- > 0 || ++b > 2){
//         cout << "Stage 1 Inside if";
//     }
//     else{
//         cout << "Stage 2 - inside else";
//     }
//     cout << a << " " << b << endl;
// }

// int main () {
//     for (int i = 0; i<=5; i--) {
//         cout << i << " ";
//         i++;
//     }
// }

// int main() {
//     for (int i = 0; i<=15; i+=2){
//         cout << i<<" ";
//         if (i&1){
//             continue;
//         }
//         i++;
//     }
// }
// int main(){
//     for (int i=0; i<5; i++){
//         for (int j = 1; j<=5; j++ ){
//             if (i+j == 10){
//                 break;
//             }
//             cout << i << " " << j << endl;
//             }
//     }
// }
int update(int a){
    a-=5;
    return a;
}
int main (){
    int a = 15;
    a = update(a);
    cout << a << endl;
    
}
