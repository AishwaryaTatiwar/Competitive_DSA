#include<stdio.h>
#include <conio.h>
//fibonaaci series-HW
int main()
 {
    int n,a=0,b=1,c,i;
    
    printf("Enter any number:");
    scanf("%d",&n);
    printf("fibonacci series is:%d,%d,",a,b);
    for( i=3;i<=n;++i){
        c=a+b ;
        printf("%d,",c);
        a=b;
        b=c;
        
    } 
    return 0;

}