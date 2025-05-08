#include<stdio.h>
int main(){
    int n,i,p,sum;
    printf("Enter any number:");
    scanf("%d",&n);
    p=n%10;
    while(n>=10) {
        n=n/10;
    }
   sum=p+n;
    printf("The sum of first and last digit is:%d",sum);
return 0;  
}