#ifndef QUEUE3_H
#define QUEUE3_H
#define ARRAYSIZE 100

typedef struct queue
{
    int queue[ARRAYSIZE];
    int front;
    int rear;
} Queue;

void push(Queue *pq,int data);
int pop(Queue *pq);
void initqueue(Queue *pq);

#endif
