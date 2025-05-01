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
    int a;
    a=12;
    cout<<"size of integer"<<sizeof(a)<<endl;
    float b;
    cout<<"size of float"<<sizeof(b)<<endl;
    char c;
    cout<<"size of character"<<sizeof(c)<<endl;
    bool d;
    cout<<"size of bool"<<sizeof(d)<<endl;
    short int si;
    long int li;
    cout<<"size of shortint"<<sizeof(si)<<endl;
    cout<<"size of longint"<<sizeof(li)<<endl;
    cout<<"Hello World";
    int amount1;
    cin>>amount1;
    int amount2;
    cin>>amount2;
    int sum=amount1+amount2;
    cout<<"Sum is"<<sum<<endl;
    return 0;
}