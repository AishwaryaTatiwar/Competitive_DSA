#include<stdlib.h>
#include<stdio.h>
struct Node{
int data;
struct Node*link;
};

struct Node* createNode(){
    struct Node*ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    if(ptr==NULL){
        printf("Allocation failed");
    }
    return ptr;
}
//createNode -> allocates a block of memory to the ptr

struct Node* insertAtEnd(struct Node* ptr,int element){
  struct Node*newNode=createNode();
   if(newNode==NULL){ //case 1: Allocation fails 
        printf("Allocation from heap has failed");
    }
   
    else{
    newNode->data=element;
    newNode->link=NULL;
    struct Node* temp=ptr;//temp mein head daalna hai 
             if(ptr==NULL){//case2 :LL is empty
                    ptr=newNode;        
             }
             else{
                          while(temp->link!=NULL){ //case 3 : Ll is not empty traversing till the last element
                          temp=temp->link;//1st node will take the address of the 2nd node
                          }
                          temp->link=newNode;
              }
    
    }  
    return ptr;
}


//display linked list
void display(struct Node*ptr){
struct Node*temp=ptr;
    printf("[");
    while(temp!=NULL){
       printf("->%d",temp->data);
        temp=temp->link;
        
    }
    printf("]");
 }
 
 //inserting at the beginning
struct Node*insertAtBeginning( free(temp->link);struct Node*ptr,int element){
    struct Node*newNode;
    newNode=createNode();
    
    if(newNode==NULL){
        printf("Allocation from heap failed");
    }
    else{
                 newNode->data=element;
                 newNode->link=NULL;
        
                  if(ptr==NULL){
                            ptr=newNode;
                  }
                 else{
                            newNode->link=ptr;//setting the link of the newnode to the address of the 1st node which will be the 2nd node after the insertion process
                            ptr=newNode;//ptr ko assign karo newnode ka address
                 }
    }
    
    return ptr;
  }
  
struct Node* deleteFirst(struct Node*ptr){
        struct Node*temp=ptr;
        if(ptr==NULL){
        printf("List is empty");
        }
        else{
            temp=ptr;
            int key=ptr->data;
            ptr=ptr->link;
            free(temp);
        }
        return ptr;

    
 }
 
 struct Node*deleteLast(struct Node*ptr){
    struct Node*temp=ptr;
    if(ptr==NULL){
        printf("empty linked list");
    }
        
    while(temp->link->link!=NULL){
    temp=temp->link;
    }
    int key=temp->link->data;
    free(temp->link);
    temp->link=NULL;
    
   }
   
 int length(struct Node*ptr)
 {
    if(ptr==NULL)
    {
        return 0;
    }
    else{
        int count=0;
        while(ptr!=NULL){
        count++;
        }
        return count;
        }
    }
 
  
  struct Node*insertAtPos(struct Node*ptr,int pos,int data){
     if(ptr==NULL){
            printf("Allocation Failed");
                    }
    else{
        if(pos<1 ||pos>length(ptr)){
                printf("Invalid Position");
                                  }
        else if(pos==1){
                insertAtBeginning(ptr,data);
                                  }
        else{
                struct Node*temp=ptr;
                struct Node*newNode=createNode();
                newNode->data=data;
                int index=1;
                while(index<pos){
                    printf("]");
                    index++;
                    temp=temp->link;
                                   }
                    newNode->link=temp->link;
                    temp->link=newNode;  }
                 }
  return ptr;
    }
    
    
  struct Node*deleteAtPos(struct Node*ptr,int pos){
    if(ptr==NULL){
        printf("Allocation failed");
    }
    else{
        if(pos<1 ||pos>length(ptr))
        {
            printf("Allocation failed");
        }
        else if(pos==1){
            deleteFirst(ptr);
        }
        else{
            struct Node*temp=ptr;
            int count=1;
            
            while(count<pos-1){
                temp=temp->link;
                count++;
           }
           struct Node*temp2=NULL;
           temp2=temp->link;
           int data=temp2->data;
           temp->link=temp2->link;
           free(temp2);
        }
    }
    return ptr;
   
  }
  
  int search(struct Node*ptr,int element){
    if(ptr==NULL){
        printf("Linked List is empty");
        return -1;
    }
    else{
            struct Node*temp=ptr;
            int pos=1;
            while(temp->data!=element && temp1=NULL)
            {
                temp=temp->link;
                pos++;
            }
              if(temp==NULL){
            return -1;
       }
       return pos;
       }
     
}


 
  

