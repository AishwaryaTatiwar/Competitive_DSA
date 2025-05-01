#define MAX 50
#include<stdio.h>
struct CQueue{
int arr[MAX];
int max_size;
int front;
int rear;
};

void createCQueue(struct CQueue *cq,int ms){
    cq->front=cq->rear=-1;
    cq->max_size=ms;
}

int isFull(struct CQueue cq){
    if(cq.front==((cq.rear+1)%cq.max_size)){
        return 1;}
    return 0;}

int isEmpty(struct CQueue cq){
        if(cq.front==-1)
        {
            return 1;
        }
        return 0;
}

int enqueue(struct CQueue *cq,int element)
{   
    if(isFull((*cq))){
        return -1;
    }
    else{
        if(cq->front==-1)
        {
            cq->front=0;
        }
        cq->rear=(cq->rear+1)%(cq->max_size);
        cq->arr[cq->rear]=element;
        return 1;
    }
}

int dequeue(struct CQueue *cq){
    int data=0;
    if(isEmpty(*cq)){
            //return data;
            return -1;
    }
    else
    {
        data=cq->arr[cq->front];
        cq->front=(cq->front+1)%cq->max_size;
        //return data;
        printf("%d",data);
        return 1;
    }
}

int frontVal(struct CQueue cq){
    return cq.arr[cq.front];
}

int rearVal(struct CQueue cq){
    return cq.arr[cq.rear];
}
