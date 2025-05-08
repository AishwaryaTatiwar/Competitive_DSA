#include<stdio.h>
int main(){
    char name;
    printf("Enter your name:");
    scanf("%s",&name);
    int units,charge,metch=100,ncharge;
    printf("Enter the units consumed:");
    scanf("%d",&units);
    if(units>=1 && units<=200) {
      charge= 0.8*units+metch;
       printf("The total charges are:Rs.%d",charge);
      }
    else if(units>=201 && units<=300){
        charge=0.9*units+metch;
        printf("The total charges are:Rs.%d",charge);
      }
    else if (units>300)
    {   charge=units+metch;
        if (charge>400){
        ncharge=charge+(0.15*charge);
        printf("The total charges are:Rs.%d",ncharge);
      }
      else{
        printf("The total charges are:Rs.%d",charge);
      }
        
    }
    else {
     printf("Invalid input.");
    }

return 0;   
}