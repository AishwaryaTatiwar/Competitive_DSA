#include<stdio.h>
int main() {
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    switch(marks)
    {
      case 1:
      marks<35;
      printf("GRADE:F");
      break;
      case 2:
      marks>=35 && marks<=54;
      printf("GRADE:C");
      break;
      case 3:
      marks>=55 && marks<=74;
      printf("GRADE:B");
      break;
      case 4:
      marks>=75 && marks<=94;
      printf("GRADE:A");
      break;
      default:
          printf("Invalid Input");
      
    }
    return 0;
}