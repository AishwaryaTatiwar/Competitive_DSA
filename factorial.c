#include<stdio.h>
int fact(int n) ;
int main() {
    printf("The factorial is:%d",fact(5));
    return 0;
}

int fact(int n) {
    if(n==0){
        return 1;
    }
    int FactNm1=fact(n-1) ;
    int FactN=FactNm1*n;
    return FactN;
}