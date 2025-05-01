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
    int n=3,m=4;
    int arr[n][m];
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=count;
            count++;
        }
    }
    for(int k=0;k<=(n-1)+(m-1);k++){
        if(k%2==0){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if((i+j)==k){
                        cout<<arr[i][j]<<" ";
                    }
                }
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                for(int j=m-1;j>=0;j--){
                    if((i+j)==k){
                        cout<<arr[i][j]<<" ";
                    }
                }
            }
        }
        cout<<endl;
    }
    

    return 0;
}