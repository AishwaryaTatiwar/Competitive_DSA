#include<stdio.h>
int main() {
    int i,j;
    for(i=5;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("%c ",69-(5-j));
            
        }
        printf("\n");
    }
return 0;
}