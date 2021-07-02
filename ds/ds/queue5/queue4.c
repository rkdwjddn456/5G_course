#include "queue4.h"
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>

void push(Queue *pq, const void* pdata)
{
    assert(pq->rear != pq->size);    
    //pq-> parr[pq->rear] = data;
    //memcpy(&pq->parr[pq->rear],pdata, pq->elesize) : x
    memcpy((unsigned char*)pq->parr + pq->elesize * pq-> rear,pdata ,pq->elesize);
    ++pq->rear;
}

int pop(Queue *pq,void* pdata)
{
    int tmp = pq->front;
    ++pq->front;
    //return pq->parr[tmp];
    memcpy(pdata,(unsigned char*)pq->parr + pq->elesize * tmp,pq->elesize);
}

void initqueue(Queue *pq,int size,int elesize)
{
    //pq->parr = malloc(sizeof(int) * size);
    pq->parr = malloc(elesize*size);
    assert(pq->parr /*!=NULL*/);
    
    pq->elesize = elesize;
    pq->front =0;
    pq->rear =0;
    pq->size = size;
}

void queuecleanup(Queue *pq)
{
    free(pq->parr);
}

