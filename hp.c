#include<stdio.h>
int main() {
    float  i,n;
    float sum=0.0;
    printf("Enter the term upto which you want to print the sum:");
    scanf("%f",&n);
    for(i=1;i<=n;i++) {
        sum= sum + (1.0/(3.0*i));
        }
        printf("The sum is: %f",sum);
    return 0;
}