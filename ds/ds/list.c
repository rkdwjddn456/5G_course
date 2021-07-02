#include "list.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void initList(List *plist)
{
    plist -> ptr = malloc(sizeof(Node));
    assert(plist->ptr);
    
    //plist->ptr->data;
    plist->ptr->next = NULL;
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

void insertFirstNode(List *plist, int data)
{
    Node *ptr = malloc(sizeof(Node));
    assert(ptr);
    
    ptr->data = data;
    ptr->next = plist->ptr->next;
    plist->ptr->next = ptr;
}

void insertNode(List *plist, int prevdata, int data)
{
    Node *ptr = plist->ptr->next;
    
    while(ptr)
    {
        if(ptr->data == prevdata) break;
        ptr = ptr->next;
    }
    
    if(ptr)
    {
        Node *tmp = malloc(sizeof(Node));
        assert(ptr );
        
        tmp->data = data;
        tmp->next = ptr->next;
        ptr->next = tmp;
    }
}

void deleteNode(List *plist, int data)
{

    Node *prevptr = plist->ptr;
    Node *ptr = plist->ptr->next;
    
    while(ptr )
    {
        if(ptr->data == data) break;
        
        ptr = ptr->next;
        prevptr =prevptr->next;
    }
    
    if(ptr )
    {
        prevptr->next = ptr->next;
        free(ptr);
    }
    
}

void printList(const List *plist)
{
    Node *ptr = plist->ptr->next;
    
    printf("[");
    while(ptr )
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
    printf("]\n");
}
