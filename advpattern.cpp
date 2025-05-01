/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello World";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++){
        cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=i-1;k>=1;k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}