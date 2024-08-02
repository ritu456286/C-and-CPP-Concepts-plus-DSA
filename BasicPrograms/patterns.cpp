#include <iostream>
using namespace std;
/*pattern 1
1
12
123
1234*/

// int main(){
//     int n;
//     int row=1;
//     cout<<"Enter value of n= ";
//     cin>>n;
//     while (row<=n){
//         int space=1;
//         while (space<=row){
//             cout<<space<<' ';
//             space=space+1;
//         }
//         row=row+1;
//         cout<<endl;

//     }
// }

/*pattern 2
1
23
456
78910*/
// int main(){
//     int n;
//     cout<<"enter value on n= ";
//     cin>>n;
//     int space=1;
//     int row=1;
//     while (row<=n){
//         int k=1;
//         while (k<=row){
//             cout<<space;
//             space=space+1;
//             k=k+1;
//         }
//         cout<<endl;
//         row=row+1;

//     }
// }

/*patter 3
   1
  23
 456
78910   */
// int main(){
//     int n;
//     cout<<"Enter n=";
//     cin>>n;
//     int row=1;
//     int val=1;
//     int temp=n-1;
//     while (row<=n){
//         int space=1;
//         
        // while (space<=temp){
        //     cout<<' ';
        //     space=space+1;
        // }
        // temp=temp-1;
        // int k=1;
//         while (k<=row){
//             cout<<val;
//             k=k+1;
//         }
//         cout<<endl;
//         row=row+1;
//         
//     }
// }
// METHOD 2(BETTER)
// int main(){
//     int n;
//     cout<<"Enter n= ";
//     cin>>n;
//     int i=1;
//     int val=1;
//     while (i<=n){
//         int k=1;
//         while (k<=n-i){
//             cout<<' ';
//             k=k+1;
//         }
//         int j=1;
//         while (j<=i){
//             cout<<val;
//             val=val+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }
/*PATTERN 4
  1
 23
345
*/
// int main(){
// 	int n;
//     cout<<"Enter n= ";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int spaces=1;
//         while (spaces<=n-i){
//             cout<<" ";
//             spaces=spaces+1;
            
//         }
//         int val=i;
//         int k=1;
//         while (k<=i){
//             cout<<val;
//             val=val+1;
//             k=k+1;
            
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

/*PATTERN 5
   *
  ***
 *****
*******
*/
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int val=1;
//     while (i<=n){
//         int spaces=1;
//         while (spaces<=n-i){
//             cout<<" ";
//             spaces=spaces+1;            
//         }
//         int k=1;
//         while (k<=val){
//             cout<<"*";
//             k=k+1;}
//         cout<<endl;
//         val=val+2;
//         i=i+1;                  
//     }
// }
//METHOD 2
// int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         while (i<=n){
//                 int spaces=1;
//                 while (spaces<=n-i){
//                         cout<<" ";
//                         spaces++;
//                 }
//                 int j=1;
//                 while (j<=2*i-1){
//                         cout<<"*";
//                         j++;
//                 }
//                 cout<<endl;
//                 i++;
//         }
// }

/*PATTERN 6
***
***
***
*/
// int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         while(i<=n){
//                 int j=1;
//                 while(j<=n){
//                         cout<<"*";
//                         j++;

//                 }
//                 cout<<endl;
//                 i++;
//         }
// }

/*PATTERN 7
1111
2222
3333
4444*/
// int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         while (i<=n){
//                 int j=1;
//                 while (j<=n){
//                         cout<<i;
//                         j++;
//                 }
//                 cout<<endl;
//                 i++;
//         }
// }
/*PATTERN 8
1234
1234
1234
1234*/
// int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         while (i<=n){
//                 int j=1;
//                 while (j<=n){
//                         cout<<j;
//                         j++;
//                 }
//                 cout<<endl;
//                 i++;
//         }

// }
/*PATTERN 9
4321
4321
4321
4321
*/
// int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         while (i<=n){
//                 int j=1;
//                 int val=4;
//                 while (j<=n){
//                         cout<<val;
//                         j++;
//                         val--;
//                 }
//                 cout<<endl;
//                 i++;
//         }
// }
//METHOD 2 (BETTER)
// int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         while (i<=n){
//                 int j=1;
//                 while (j<=n){
//                         cout<<n-j+1;
//                         j++;
//                 }
//                 cout<<endl;
//                 i++;
//         }
// }
/*PATTERN 10
1
23
345
4567*/
// int main(){
//         int n;
//         cin>>n;
//         int i=1;
        
//         while (i<=n){
//                 int j=1;
//                 int val=i;
//                 while (j<=i){
//                         cout<<val;
//                         j++;
//                         val++;
//                 }
//                 cout<<endl;
//                 i++;
//         }
// }

//method 2(without using value)
// int main(){
//    int n;
//    cin>>n;
//    int i=1;
   
//    while (i<=n){
//       int j=i;
//       while (j < 2*i){
//          cout << j ;
//          j++;
//       }
//       cout << endl;
//       i++;

//    }
// }
/*PATTERN 11
ABCD
ABCD
ABCD
ABCD*/
// int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         while (i<=n){
//                 int j=1;
//                 int x=65;                
//                 while (j<=n){
//                         cout<<char(x);
//                         x++;
//                         j++;
//                 }
//                 cout<<endl;
//                 i++;
//         }     
// }
//METHOD 2 (BETTER)
// int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         while (i<=n){
//                 int j=1;
//                 while (j<=n){
//                         char ch='A'+j-1;
//                         cout<<ch;
//                         j++;
//                 }
//                 cout<<endl;
//                 i++;
//         }
// }
/*PATTERN 12
ABCD
BCDE
CDEF
DEFG
*/
// int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         int x=65;
//         while (i<=n){
//                 int j=1; 
//                 int y=x;              
//                 while (j<=n){
//                         cout<<char(y);
//                         y++;
//                         j++;
//                 }
//                 cout<<endl;
//                 i++;
//                 x++;
//         }     
// }

// METHOD 2
// int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         int x=int('A');
//         while (i<=n){
//                 int j=1;
//                 while (j<=n){
//                         char ch=x+j-1;
//                         cout<<ch;
//                         j++;
//                 }
//                 cout<<endl;
//                 i++;
//                 x++;
//         }
// }

//METHOD 3
// int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         while (i<=n){
//                 int j=1;
//                 char startChar='A'+i-1;
//                 while(j<=n){
//                         // char ch= startChar + j - 1;
//                         cout<< startChar;
//                         startChar++;
//                         j++;
//                 }
//                 cout<<endl;
//                 i++;
//         }
// }

// method 4
// int main(){
//    int n;
//    cin>>n;
//    int i=1;
//    while (i<=n){
//       int j=1;
//       while (j <= n){
//          char ch = 'A' +i+j-2;
//          cout << ch;
//          j++;
//       }
//       cout << endl;
//       i++;}
// }

/*PATTERN 13
   1
  12
 123*/
//  int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         while (i<=n){
//                 int spaces=1;
//                 while (spaces<=n-i){
//                         cout<<" ";
//                         spaces++;

//                 }
//                 int val=1;
//                 while(val<=i){
//                         cout<<val;
//                         val++;
//                 }
//                 cout<<endl;
//                 i++;
//         }
//  }
/*PATTERN 14
4444
333
22
1*/
// int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         while (i<=n){
//                 int j=1;
//                 while (j<=n-i+1){
//                         cout<<n-i+1;
//                         j++;
//                 }
//                 cout<<endl;
//                 i++;
//         } 
// }
/*PATTERN 14
   1
  232
 34543
4567654*/
// int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         while(i<=n){
//                 int spaces=1;
//                 while (spaces<=n-i){
//                         cout<<" ";
//                         spaces++;
//                 }
//                 int val=i;
//                 int k=1;
//                 while (k<=i){
//                         cout<<val;
//                         val++;
//                         k++;
//                 }
//                 int j=1;
//                 val=val-2;
//                 while(j<=i-1){
//                         cout<<val;
//                         val--;
//                         j++;
//                 }
//                 cout<<endl;
//                 i++;
//         }
// }
/*PATTERN 15: diamond pattern(not completed )
   *
  ***
   *
   */
//   int main(){
//         int n;
//         cin>>n;
//         int i=1;
//         while (i<=n){
//                 int spaces=1;
//                 while (spaces<=n-i){
//                         cout<<" ";
//                         spaces++;
//                 }
//                 int j=1;
//                 while (j<=2*i-1){
//                         cout<<"*";
//                         j++;
//                 }
//                 cout<<endl;
//                 i++;
//         }
// }
// PATTERN 16 
/* 
   1
  212
 32123
4321234*/
// int main(){
//         int n;
//         cin >> n;
//         int i=1;
//         while (i<=n){
//                 int spaces= 1;
//                 while (spaces<=n-i){
//                         cout << " ";
//                         spaces++;
//                 }
//                 int val=i;
//                 int j=1;
//                 while (j<=i){
//                         cout << val;
//                         val--;
//                         j++;
//                 }
//                 val=val+2;
//                 j=1;
//                 while (j<=i-1){
//                         cout << val;
//                         val++;
//                         j++;
//                 }
//                 cout << endl;
//                 i++;
//         }
// }
//PATTERN 17
/* 
1234554321
1234**4321
123****321
12******21
1********1
*/

// int main(){
//         int n;
//         cin >> n;
//         int i = 1;
//         int temp=n;
//         while (i<=n){
//                 int val = 1;
//                 while (val<=temp){
//                         cout << val;
//                         val++;
//                 }
                
//                 int j = 1;
//                 while (j<=i-1){
//                         cout << "**";
//                         j++;
//                 }
//                 val--;
//                 while (val>=1){
//                         cout << val;
//                         val--;
//                 }
//                 cout << endl;
//                 temp--;
//                 i++;
//         }
// }
/* PATTERN 18
1
21
321
4321
*/
// int main() {
//    int n;
//    cin >> n;
//    int i=1;
//    while (i <= n){
//       int j=i;
//       while (j > 0){
//          cout << j;
//          j--;
//       }
//       cout << endl;
//       i++;
//    }
// }

//method 2
// int main() {
//    int n;
//    cin >> n;
//    int i=1;
//    while (i <= n){
//       int j=1;
//       while (j <= i){
//          cout << i-j+1;
//          j++;
//       }
//       cout << endl;
//       i++;
//       }
// }
/*PATTERN 19
AAA
BBB
CCC*/
// int main(){
//    int n;
//    cin >> n;
//    int i=1;
//    while (i <= n){
//       int j = 1;
//       while (j <= n){
//          cout << char('A'+i-1);
//          j++;
//       }
//       cout << endl;
//       i++;
//    }
// }
/*PATTERN 20
A
BB
CCC*/
// int main () {
//    int n;
//    cin >> n;
//    int i = 1;
//    while (i <= n){
//       int j = 1;
//       while (j <= i){
//          cout << char ('A'+i-1);
//          j++;
//       }
//       cout << endl;
//       i++;
//    }
// }
/*PATTERN 20
A
BC
CDE
DEFG*/
// method 1
// int main () {
//    int n;
//    cin >> n;
//    int i = 1;
//    while (i <= n){
//       int j = 1;
//       char ch ='A'+i-1;
//       while (j <= i){
//          cout << ch ;
//          ch ++;
//          j++;
//       }
//       cout << endl;
//       i++;
//    }
// }
//method 2
// int main () {
//    int n;
//    cin >> n;
//    int i = 1;
//    while (i <= n){
//       int j = 1;
//       while (j <= i){
//          cout << char ('A'+j+i-2) ;
//          j++;
//       }
//       cout << endl;
//       i++;
//    }
// }
/*PATTERN 21
D 
CD
BCD
ABCD
*/
int main (){
   int n;
    cin >> n;
    int i = 1;
   //  char start = 'A'+n-1;
    while (i <= n){
      int j = 1;
      char start = 'A'+n-i;
      while (j <= i){
         cout << start;
         j++;
         start++;
      }
      cout << endl;
      i++;
    }
}

