//linear queue
#include<stdio.h>
#define MAX 50

//dynamic structure of queue
struct Queue
{
    int arr[MAX];
    int front,rear;
    int max_size;
};

//initialisation of queue
void createQueue(struct Queue *q,int max_size)
{
    q->front=q->rear=-1;
    q->max_size=max_size;           
}

//checking whether queue is full
//condition ->rear becomes equal to (max-size-1) as queue indexing starts from 0
int isFull(struct Queue q)
{
    if((q.rear)==(q.max_size-1))
    {
        return 1;
    }
    else{
        return 0;
    }
}

//checking whether queue is empty 
//condition->front=rear=-1
int isEmpty(struct Queue q){
    if((q.front==-1)){
        return 1;
    }
    else{
        return 0;
    }
}


int addElement(struct Queue *q,long element){

    if(isFull(*q))
    {
        return 0;
    }
    else{
    if((q->front==-1) && (q->rear=-1)){ //insertion in empty queue
        q->front=0;
        }
  
    q->rear++;

   
    q->arr[q->rear]=element;
    return 1;
        
    }

}

int deleteElement(struct Queue *q){
    long  data=0;
    if(isEmpty(*q)){
        return data;
    }
    else{
           data=q->arr[q->front];
        if(q->front==q->rear){ //deletion of single element of the queue 
            q->front=q->rear=-1;
        }
      //deletion of any element

         
            q->front++;
            return data;
        
    }
}

int frontVal(struct Queue *q){
    return (q->arr[q->front]);
}

int rearVal(struct Queue *q){
    return(q->arr[q->rear]);
}