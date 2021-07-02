#include "queue.h"


void Queue:: push(int data)
{
    this-> parr[this->rear] = data;
    ++this->rear;
}
int Queue::pop()
{
    return this->parr[this->front++];
}

Queue:: Queue(int size)
{
    //this->parr = (int*)malloc(sizeof(int) * size);
    this->parr = new int[size];
    this->front =0;
    this->rear =0;
    this->size = size;
}

Queue:: ~Queue()
{
    //free(this->parr);
    delete [] this->parr;
}

