#include <stdio.h>
// void main(){
// int a,*p;
// a=10;
// p=&a;
// printf("address of a is %u",p);
// printf("address of a is %u",&a);

// }
// int main(){


//     int a;
//     float b,c;
//     double d;
//     char ch;
//     a=10;b=2.5;c=12.36;d=12345.66;ch='A';
//     printf("%d stored in location %u \n",a,&a);
//     printf("%f stored in location %u \n",b,&b);
//     printf("%f stored in location %u \n",c,&c);
//     printf("%ld stored in location %u \n",d,&d);
//     printf("%c stored in location %u \n",ch,&ch);
    
// }
int  main(){
    int a,b;
    a=5;b=20;
    swap(&a,&b);
    printf("\n a=%d,b=%d",a,b);
}


void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;

}