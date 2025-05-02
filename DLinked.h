#include<stdlib.h>
struct Node{
    int data;
    struct Node*prev;
    struct Node*next;

};

struct Node*createNode(){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    return ptr;
}

int length(struct Node*head){
    if(head==NULL){
        return 0;
    }
    else{
    struct Node*temp=head;
    int count=1;
    while(temp!=NULL){
        count++;
    }
    return count;

    }
}


struct Node*insertAtEnd(struct Node*head,int element){
    if(head==NULL){
        return NULL;
    }
    else{
        struct Node*newNode=createNode();
        newNode->data=element;
        struct Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        newNode->prev=temp;
        temp->next=newNode;
        newNode->next=NULL;
        return head;

    }
}


struct Node*insertAtBeg(struct Node*head,int element){
    if(head==NULL){
        return NULL;

    }
    else{
        struct Node*newNode=createNode();
        newNode->prev=NULL;
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        return head;
    }
}

struct Node*insertAtPos(struct Node*head,int element,int pos){
    if(head==NULL){
        return NULL;
    }
    else{
        if(pos<1 || pos>length(head)){
            return NULL;
        }
        else if(pos==1){
            head=insertAtBeg(head,element);
        }
        else{
            struct Node*newNode=createNode();
            struct Node*temp=head;
            int count=1;
            if(newNode==NULL){
                return NULL;
            }
            newNode->data=element;
            while(count<pos-1){
                temp=temp->next;
            }
            newNode->next=temp->next;
            temp->next=newNode;
            newNode->prev=temp;
            return head;
        }
    }
}

struct Node*deleteLast(struct Node*head){
    if(head==NULL){
        return NULL;
    }
    else{
        struct Node*temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        free(temp->next->next);
        temp->next=NULL;
        return head;


    }
}

struct Node*deleteFront(struct Node*head){
    if(head==NULL){
        return NULL;
    }
    else{
        struct Node*temp=head;
        head=head->next;
        head->prev=NULL;
        return head;
    }

}

struct Node*deletePos(struct Node*head,int pos){
    if(head==NULL){
        return NULL;
    }
    if(pos<1 || pos>length(head)){
        return NULL;
    }
    else if(pos==1){
        head=deleteFront(head);
    }
    else{
        int count=1;
        struct Node*temp=head;
        while(count<pos-1){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        temp->next->prev=temp;
        return head;
    }
}