#include<stdlib.h>
#include<stdio.h>
struct Node{
    int data;
    struct Node*link;
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
    while(temp->link!=head){
        count++;
    }
    return count;

    }
}

//inserting at end
struct Node*insertAtEnd(struct Node*head,int element){
    if(head==NULL){
        return NULL;
    }
    else{
        struct Node*temp=head;
        struct Node*newNode=createNode();
        if(newNode==NULL){
            return NULL;
        }
        while(temp->link!=head){
            temp=temp->link;
        }
        newNode->link=head;
        newNode->data=element;
        temp->link=newNode;
        return head;
    }
}


struct Node*insertAtBeginning(struct Node*head,int element){
    if(head==NULL){
        return NULL;
    }
    else{
        struct Node*newNode=createNode();
        if(newNode==NULL){
            return NULL;
        }
       newNode->data=element;
       struct Node*temp=head;
        while(temp->link!=head){
            temp=temp->link;
        }
       newNode->link=head;
        temp->link=newNode;
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
            printf("Invalid position");
            return NULL;
        }
        else if(pos==1){
            insertAtBeginning(head,element);

        }
        else{
            int count=1;
            struct Node*newNode=createNode();
            if(newNode==NULL){
                return NULL;
            }
            struct Node*temp=head;

            while(count<pos-1){
                temp=temp->link;
            }
            newNode=temp->link;
            temp->link=newNode;
            newNode->data=element;
            return head;

        }
    }

}

struct Node*deleteFront(struct Node*head){
    if(head==NULL){
        return NULL;
    }
    else{
        struct Node*temp=head;
        struct Node*temp2=head;
        while(temp->link!=head){
            temp=temp->link;
        }
        temp->link=head->link;
        head=head->link;
        free(temp2);
        return head;
    }

}

struct Node*deleteLast(struct Node*head){
    if(head==NULL){
        return NULL;
    }
    else{
        struct Node*temp=head;
        while(temp->link->link!=head){
            temp=temp->link;
        }
        temp->link=head;
        return head;

    }

}

struct Node*deletePos(struct Node*head,int element,int pos){
    if(head==NULL){
        return NULL;
    }
    else{
        if(pos<1 || pos>length(head)){
            printf("Invalid position");
            return NULL;
        }
        else if(pos==1){
            deleteFront(head);

        }
        else{
            int count=1;
            struct Node*temp=head;
            while(count<pos-1){
                count++;
                temp=temp->link;
            }
            struct Node*temp2=temp->link;
            temp->link=temp2->link;
            free(temp2);

            return head;

        }
    }

}