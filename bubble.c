#include<stdio.h>
int main() {
    int arr[7],i,j,k,temp;
    printf("Enter array elements :");
    for (i=0;i<7;i++) {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<7;i++) {
        for(j=0;j<7-i;j++){
            if(arr[j]>arr[j+1]) {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;  }
        }
        
    }
    for (i=0;i<7;i++) {
        printf("%d  ",arr[i]);
    }
return 0;
}