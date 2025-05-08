#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    (a>b)?((a>c)?(printf("The greatest no. is%d",a)):(printf("The greatest no. is%d",c))):((b>c)?(printf("The greatest no. is%d",b)):(printf("The greatest no. is%d",c )) );
    return 0;
    }