#include<stdlib.h>
#include<stdio.h>
struct Node{
 int data;
 struct Node*link;   
};

struct Node* createNode(){
    struct Node* ptr;   
    ptr=(struct Node*)malloc(sizeof(struct Node));
    if(ptr==NULL){
        printf("Allocation failed");
    }
    return ptr;
}


void display(struct Node*ptr){
    if(ptr==NULL){
        printf("Linked list is empty");

    }
    else{
        struct Node* temp=ptr;

        while(temp!=NULL){
            temp=temp->link;
            printf("->%d",temp->data);
        }
    }
}

int length(struct Node*ptr){
    int count=0;
    struct Node*temp=ptr;
    while(temp!=NULL){
        count++;
        temp=temp->link;
    }
    return count;
}

struct Node*insertAtBeginning(struct Node*ptr,int element){
    struct Node* newNode=createNode();
    if(newNode==NULL){
        printf("Allocation failed");        
    }
    else{
        newNode->data=element;
        newNode->link=NULL;
        
        if(ptr==NULL){
            ptr=newNode;
        }
        else{

        newNode->link=ptr;
        ptr=newNode;

        }
    }
    return ptr;
}


struct Node* insertAtEnd(struct Node*ptr,int element){
    struct Node*newNode=createNode();
    if(newNode==NULL){
        printf("Allocation failed");
    }
    else{
        newNode->data=element;
      
        struct Node* temp=ptr;
        while(temp!=NULL){
            temp=temp->link;
        }
        temp->link=newNode;
        newNode->link=NULL;
      
    }

}

struct Node*insertAtPos(struct Node*ptr,int pos,int element){

    if(pos<0 || pos>length(ptr)){
        printf("Invalid length");
    }
    else if(pos==1){
        insertAtBeginning(ptr,element);
    }
    else{
        struct Node*newNode=createNode();
        if(newNode==NULL){
            printf("Allocation failed");
        }
        struct Node*temp=ptr;
        int index=1;
        while(index<pos-1){
            temp=temp->link;
        }
        newNode->link=temp->link;
        temp->link=newNode;
    }
    return ptr;
}

struct Node*deleteFront(struct Node*ptr){
    if(ptr==NULL){
        printf("Empty Linked List");
        
    }
    else{
        struct Node* temp=ptr;
        int data=ptr->data;
        ptr=ptr->link;
        free(temp);
    }
    return ptr;
}

struct Node*deleteLast(struct Node*ptr){
    if(ptr==NULL){
        printf("Empty Linked List");
    }
    else{
        struct Node*temp=ptr;
        while(temp->link->link!=NULL){
            temp=temp->link;
        }
        int element=temp->link->data;
        free(temp->link);
        temp->link=NULL;
    }
    return ptr;
}

struct Node*deletePos(struct Node*ptr,int pos){
    if(ptr==NULL){
        printf("Empty linked list");
    }
    else if(0<pos || pos>length(ptr)){
        printf("Invalid Length");
    }
    else{
        int index=1;
        struct Node*temp=ptr;
        while(index<pos-1){
            index++;
            temp=temp->link;
        }
        struct Node*temp2=temp->link;
        int element=temp2->data;
        temp->link=temp2->link;
        free(temp2);
    }
    return ptr;
}

int search(int element,struct Node*ptr){
    if(ptr==NULL){
        printf("Empty list");
    }
    else{
        struct Node*temp=ptr;
        int count=1;
        while(temp->link!=NULL && temp->data!=element){
            temp=temp->link;
            count++;
        }
        if(temp==NULL){
            return -1;
        }
        return count;
    }
}

int update(int element,int element2,struct Node*ptr){
    if(ptr==NULL){
        printf("Empty linked list");
    }
    else{
        struct Node*temp=ptr;
        int count=1;
        while(temp->link!=NULL && temp->data!=element){
            temp=temp->link;
            count++;
        }
        if(temp->data==element){
            temp->data=element2;
            return 1;
        }
        if(temp==NULL){
            return -1;
        }
    }
}

struct Node*reverse(struct Node*ptr){
    if(ptr==NULL){
        printf("Empty Linked List");
    }
    else{
        struct Node* current=ptr;
        struct Node* next=NULL;
        struct Node* prev=NULL;

        while(next!=NULL){
            next=current->link;
            current->link=prev;
            prev=current;
            current=next;
        }
        ptr=prev;
    }
    return ptr;
}
/*splitting singly linked list*/
struct Node*divide(struct Node*ptr){
    if(ptr==NULL){
        printf("Empty linked list");

    }
    else{
        int count=length(ptr);
        int n=count/2;
        struct Node*temp1;
        struct Node*temp2;
        temp1=ptr;
        temp2=ptr->link;
        while(n!=0){
            temp1=temp1->link;
            temp2=temp2->link;  
            n--;
           }
           temp1->link=NULL;

    }
    
}

/*Dividing circular linked list*/
struct Node*cdivide(struct Node*head){
    if(head==NULL){
        printf("Empty linked list");
    }
    else{
        int count=length(head);
        int n;
        if(count%2==0){
         n=count/2;
         }
         else{
            n=(count/2)+1;
         }
        struct Node*temp1;
        struct Node*temp2;
        temp1=head;
        temp2=head->link;
        while(n!=0){
            temp1=temp1->link;
            temp2=temp2->link;
            n--;
        }
        temp1->link=head;
        struct Node*temp3;
        temp3=temp2->link;
        while(temp2->link!=head){
            temp2=temp2->link;

        }
        temp2->link=temp3;
        display(head);
        display(temp3);


    }
    return head;
}

/*Adding two numbers*/
struct Node*addNumbers(struct Node*head1,struct Node*head2){
    if(head1==NULL || head2==NULL){
        printf("Linked list is empty");
    }
    else{
    struct Node*head=createNode();
    if(head==NULL){
        printf("Allocation failed");
    }
    else{
        int carry=0,sum=0;
        int len1=length(head1);
        int len2=length(head2);
        if(len1>len2){
            while(len2!=NULL){
                sum=head1->data+head2->data;
                if(sum>10){
                    sum=carry%10;
                    carry=carry+carry/10;
                    head=insertAtEnd(head,carry);
                }
               if(sum==10){
                    sum=0;
                    carry=carry+carry/10;
                    head=insertAtEnd(head,carry);
                }
            }
        }
    }

    }
}

// /*Deleting nth node from the end*/
// struct ListNode*removeNthFromEnd(struct ListNode*head,int n){
//     struct ListNode*dummy=(struct ListNode*)malloc(sizeof(struct ListNode));
//     dummy->next=head;
//     struct ListNode*fast=dummy;
//     struct ListNode*slow=dummy;
//     for(int i=0;i<=n;i++){
//         fast=fast->next;
//     }
//     while(fast!=NULL){
//         fast=fast->next;
//         slow=slow->next;
//     }
//     struct ListNode*toRemove=slow->next;
//     slow->next=slow->next->next;
//     free(toRemove);
//     struct ListNode*result=dummy->next;
//     free(dummy);
//     return result;

//}


struct Node*removeDuplicates(struct Node*head){
    if(head==NULL){
        return NULL;
    }
    else{
    struct Node*fast=head->link;
    struct Node*slow=head;
    while(fast->link!=NULL){
        if(slow->data==fast->data){
            head=removeNode(head,fast->data);
        }
        else{
            slow=slow->link;
            fast=fast->link;
        }

    }
    
    }

}

struct Node*removeNode(struct Node*head,int key){
    int count=1,pos=1;
    struct Node*temp=head;
    if(temp->data==key){
        head=deleteFront(head);
    }
    while(temp->link->data!=key){
        count++;
        temp=temp->link;
    }
    struct Node*temp2;
    temp2=temp->link;
    temp=temp->link->link;
    free(temp2);
    return head;

    
}