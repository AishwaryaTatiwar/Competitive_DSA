#include<stdio.h>
struct complex{
    int real; 
    int img;
};
int main(){
struct complex c1={2,4};
struct complex *ptr=&c1;
printf("Complex number is: (%d)+i(%d)",ptr->real,ptr->img);
return 0;
}