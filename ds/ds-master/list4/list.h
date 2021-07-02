#ifndef LIST_H
#define LIST_H

typedef struct node
{
    //int data;
    struct node *next;
} Node;

typedef struct
{
    Node *ptr;  
    int elesize;  
} List;

void initList(List *plist, int elesize);
void cleanupList(List *plist);

void insertFirstNode(List *plist, const void* pdata);
void insertNode(List *plist, const void* pprevdata, const void* pdata);
void deleteNode(List *plist, const void* pdata);

void printList(const List *plist,void (*pf)(const void* pdata));

#endif
