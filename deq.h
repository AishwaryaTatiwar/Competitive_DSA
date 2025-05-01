//implementation of deq using circular queue
#include"CQueue.h"

//inserting from front end
int enqueFront(struct CQueue *cq,int element){
   
     if(isFull(*cq)){
        return -1;
    }
    else{
        if(cq->rear==-1){
            cq->rear=0;
        }
        if(cq->front==0){
            cq->front=(cq->max_size-1);
            cq->arr[cq->front]=element;
        }
        else{
            
            cq->front--;
            cq->arr[cq->front]=element;
        }
        return 1;
    }
}

//deleting from rear end
int dequeRear(struct CQueue *cq){
   int data;

    if(isEmpty(*cq)){
        return data;
    }
    else{
        if(cq->front==cq->rear){
            data=cq->arr[cq->front];
            cq->front=cq->rear=-1;
        }
        else{
            data=cq->arr[cq->rear];
          
            (cq->rear)--;
        }
        return data;
    }
}