#include<stdio.h>
#include"linked.h"
int main(){
    struct Node*head=NULL;
    for(int i=0;i<=4;i++){
        insertAtBeginning(head,i);
        }
       
        display(head);
        return 0;
}
