#include "queue3.h"
#include <stdio.h>
#include <stdlib.h>

void push(Queue *pq,int data)
{
    if(pq->rear == ARRAYSIZE)
    {
        fprintf(stderr,"queue is full\n");
        exit(1);
    }
    
    pq->queue[pq->rear] = data;
    ++pq->rear;
}

int pop(Queue *pq)
{
    if(pq->front == pq->rear)
    {
        fprintf(stderr,"queue is empty\n");
        exit(2);
    }
    int tmp = pq->front;
    ++pq->front;
    return pq->queue[tmp];
}

void initqueue(Queue *pq)
{
    pq->front =0;
    pq->rear =0;
}
