#ifndef QUEUE4_H
#define QUEUE4_H

typedef struct queue
{
    //int *parr;
    void *parr;
    int elesize;
    int front;
    int rear;
    int size;
} Queue;

void push(Queue *pq, const void* pdata);
int pop(Queue *pq, void* pdata);
void initqueue(Queue *pq,int size,int elesize);
void queuecleanup(Queue *pq);

#endif
