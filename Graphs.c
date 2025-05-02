#include <stdio.h>
#include "CircularQueue.h"

void DFS(int v,int G[][v],int SRC,int visited[]){
    visited[SRC]=1;
    int i=0;
    printf("%d",SRC);
    while(i<v){
        if(G[SRC][i]==1 && visited[i]==0){
            DFS(v,G,i,visited);
        }
        i+=1;
    }

}

void BFS(int v, int G[][v], int SRC, int visited[v]){
    struct CQueue cq;
    createCQueue(&cq, 20);
    visited[SRC] = 1;
    printf("%d ", SRC);
    enqueue(&cq, SRC);
    while(!isEmpty(cq)){
        SRC = dequeue(&cq);
        for (int i = 0; i < v; i++){
            if(G[SRC][i] == 1 && visited[i]==0){
                visited[i]= 1;
                printf("%d ", i);
                enqueue(&cq, i);
            }
        }
        
    }

}

int main(){
    int v;
    printf("Enter the number of vertices: \n");
    scanf("%d", &v);
    int G[v][v], visited[v], visited2[v];
    printf("Enter adjacency matrix\n");
    for (int i = 0; i < v; i++)
    {
        visited[i] = 0;
       
        for (int j = 0; j < v; j++)
        {
            scanf("%d", &G[i][j]);
        }
    }
   int choice;
   printf("\nEnter \n1.DFS \n.2.BFS");
   scanf("%d",&choice);
   switch (choice)
   {
    case 1:
    DFS(v,G,0,visited);
    break;
    case 2:
    BFS(v,G,0,visited);
    break;

   default:
    break;
   }
    
    return 0;
}