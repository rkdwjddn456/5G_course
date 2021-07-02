#include "list.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initList(List *plist, int elesize)
{
    plist -> ptr = malloc(sizeof(Node));
    assert(plist->ptr);
    
    //plist->ptr->data;
    plist->ptr->next = NULL;
    plist->elesize = elesize;
}

void cleanupList(List *plist)
{
    Node *ptr = plist->ptr;
    
    while(ptr )
    {
        Node *tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }
}

void insertFirstNode(List *plist,const void* pdata)
{
    Node *ptr = malloc(sizeof(Node) + plist->elesize);
    assert(ptr);
    
    //ptr->data = data;
    memcpy(ptr+1, pdata, plist->elesize);
    ptr->next = plist->ptr->next;
    plist->ptr->next = ptr;
}

void insertNode(List *plist, const void* pprevdata, const void* pdata)
{
    Node *ptr = plist->ptr->next;
    
    while(ptr)
    {
        //if(ptr->data == prevdata) break;
        if(memcmp(ptr+1,pprevdata,plist->elesize) == 0) break;
        ptr = ptr->next;
    }
    
    if(ptr)
    {
        Node *tmp = malloc(sizeof(Node) +plist->elesize);
        assert(tmp );
        
        //tmp->data = data;
        memcpy(tmp+1, pdata , plist->elesize);
        
        tmp->next = ptr->next;
        ptr->next = tmp;
    }
}

void deleteNode(List *plist,const void* pdata)
{

    Node *prevptr = plist->ptr;
    Node *ptr = plist->ptr->next;
    
    while(ptr )
    {
        //if(ptr->data == data) break;
        if(memcmp(ptr+1,pdata,plist->elesize) == 0) break;
        
        ptr = ptr->next;
        prevptr =prevptr->next;
    }
    
    if(ptr )
    {
        prevptr->next = ptr->next;
        free(ptr);
    }
    
}

void printList(const List *plist,void (*pf)(const void* pdata))
{
    Node *ptr = plist->ptr->next;
    
    printf("[");
    while(ptr )
    {
        //printf("%d, ",ptr->data);
        (*pf)(ptr+1); // pf(ptr+1);
        
        ptr = ptr->next;
    }
    printf("]\n");
}
