#include <stdio.h>

int main() {
	// your code goes here
	int T; 
	scanf("%d",&T);
	for(int i=0;i<T;i++){
	   	int A1,A2,A3,B1,B2,B3;
	   	scanf("%d %d %d %d %d %d",&A1,&A2,&A3,&B1,&B2,&B3);
	   	int arr1[3],arr2[3];
	   	arr1[0]=A1;
	   	arr1[1]=A2;
	   	arr1[2]=A3;
	   	arr2[0]=B1;
	   	arr2[1]=B2;
	   	arr2[2]=B3;
	   	for(int i=0;i<3;i++){
	   	    for(int j=i+1;j<3;j++){
	   	        if(arr1[i]<arr1[j]){
	   	            int temp=arr1[i];
	   	            arr1[i]=arr1[j];
	   	            arr1[j]=temp;
	   	        }
	   	    }
	   	}
	   	for(int i=0;i<3;i++){
	   	    for(int j=i+1;j<3;j++){
	   	        if(arr2[i]<arr2[j]){
	   	            int temp=arr2[i];
	   	            arr2[i]=arr2[j];
	   	            arr2[j]=temp;
	   	        }
	   	    }
	   	}
	   int num1=arr1[0]*100+arr1[1]*10+arr1[2];
	   int num2=arr2[0]*100+arr2[1]*10+arr2[2];
	   if(num1>num2){
	       printf("Alice\n");
	   }
	   else if(num1==num2){
	       printf("Tie\n");
	   }
	   else{
	       printf("Bob\n");
	   }
	}
	return 0;
}

