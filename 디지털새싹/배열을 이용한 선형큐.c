#include <stdio.h>
#include <stdlib.h>

#define MAX_Q_SIZE 5
typedef int element;

typedef struct{
    int front;
    int rear;
    element data[MAX_Q_SIZE];
}Queue;

void error(char*message){
    printf("%s\n", message);
    exit(0);
}

void initQueue(Queue* q){
    q -> front = -1;
    q -> rear = -1;
}

int isFull(Queue* q){
    return q-> rear == MAX_Q_SIZE-1;
}

int isEmpty(Queue* q){
    return q -> rear == MAX_Q_SIZE-1;
}

void enQueue(Queue* q, element item){
    if(isFull(q)){
        error("Queue is Full\n");
    }
    else{
        q -> data[++q->rear] = item;
    }
}

element deQueue(Queue* q){
    int temp;
    if(isEmpty(q)){
        error("Queue is Empty\n");
    }
    else{
        q -> data[q++->front];
        return temp;
    }
}

void queuePrint(Queue* q){
    int i;
    for(i=0;i<MAX_Q_SIZE;i++)
    {
        if(i<=q->front || i>q->rear){
            printf("|");
        }
        else
        {
            printf("%d|", q -> data[i]);
        }
    }
    printf("\n");
}