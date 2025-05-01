//Circular Queue

#define MAX 50
struct CQueue
{
    int front,rear;
    int max_size;
    int arr[MAX];
};

int createQ(struct CQueue *cq,int max_size){
    cq->max_size=max_size;
    cq->front=-1;
    cq->rear=-1;
}

int isFull(struct CQueue cq){
    if(cq.front==((cq.rear+1)%cq.max_size)){
        //cq.front=(cq.rear+1)%cq.ms
        return 1;
    }
    else{
        return 0;
    }

}

int isEmpty(struct CQueue cq){
    if(cq.front==-1 && cq.rear==-1){
        return 1;
    }
    else{
        return 0;
    }

}

int enQueue(struct CQueue *cq,int element){
    if(isFull(*cq)){
        return 0;
    }
    else{
        if(cq->front==-1){
            cq->front=0;
        }

       
        cq->rear=(cq->rear +1)%cq->max_size;
      
        cq->arr[cq->rear]=element;

        return 1;
    }

}

int deQueue(struct CQueue *cq){
    int data=-1;
    if(isEmpty(*cq)){
        return data;
    }
    else{
       
        if(cq->front==cq->rear){
            cq->front=cq->rear=-1;
        }
        data=cq->arr[cq->front];
        cq->front=(cq->front+1)%cq->max_size;
        return data;
    }

}

int frontVal(struct CQueue cq){
    return (cq.arr[cq.front]);
}

int rearVal(struct CQueue cq){
    return(cq.arr[cq.rear]);
}