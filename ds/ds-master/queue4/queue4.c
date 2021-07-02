#include "queue4.h"
#include <stdlib.h>

void push(Queue *pq,int data)
{
    pq-> parr[pq->rear] = data;
    ++pq->rear;
}
int pop(Queue *pq)
{
    return pq->parr[pq->front++];
}
void initqueue(Queue *pq,int size)
{
    pq->parr = malloc(sizeof(int) * size);
    pq->front =0;
    pq->rear =0;
    pq->size = size;
}

void queuecleanup(Queue *pq)
{
    free(pq->parr);
}

