/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n){
    int sum=0;
    int i=0;
    while(n>0){
        int r=n%10;
        sum=sum+(r*pow(2,i));
        n=n/10;
        i++;
    }
    return sum;
}
int octalToDecimal(int n){
    int sum=0;
    int i=0;
    while(n>0){
        int r=n%10;
        sum=sum+(r*pow(8,i));
        n=n/10;
        i++;
    }
    return sum;
}
int hexToDecimal(string n){
    int sum=0;
    int l=n.size();
    int p=0;
    for(int i=l-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            sum=sum+((n[i]-'0')*pow(16,p));
        }
        else if(n[i]>='A' && n[i]<='F'){
            int mn=n[i]-'A'+10;
            sum=sum+(mn*pow(16,p));
        }
        p++;
    }
    return sum;
}
string decimalToBinary(int n){
    if(n==0)return"0";
    string a="";
    while(n>0){
        string r=to_string(n%2);
        a=r+a;
        n=n/2;
    }
    return a;
}
string decimalToOctal(int n){
    if(n==0)return"0";
    string a="";
    while(n>0){
        string r=to_string(n%8);
        a=r+a;
        n=n/8;
    }
    return a;
}
string decimalToHexadecimal(int n){
    if(n==0)return"0";
    string a="";
    while(n>0){
        if((n%16)>9){
            char c=(n%16)-10+'A';
            a=c+a;
            n=n/16;
        }
        else{
            string r=to_string(n%16);
            a=r+a;
            n=n/16;
        }
    }
    return a;
}

int main()
{
    int ans=binaryToDecimal(11);
    int ans1=octalToDecimal(10);
    int ans2=hexToDecimal("1CF");
    string s=decimalToBinary(8);
    string s1=decimalToOctal(100);
    string s2=decimalToHexadecimal(2748);
    cout<<s2<<endl;
    
    return 0;
}