
#ifndef QUEUE4_H
#define QUEUE4_H

typedef struct queue
{
    int *parr;
    int queue[10];
    int front;
    int rear;
    int size;
} Queue;

void push(Queue *pq,int data);
int pop(Queue *pq);
void initqueue(Queue *pq,int size);
void queuecleanup(Queue *pq);
#endif
