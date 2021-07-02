
static int stack[100];
static int tos; // top of stack

void push(int data)
{
    stack[tos] = data;
    ++tos;
    //printf("%d\n",tos);
}

int pop(void)
{
    --tos;
    //printf("%d\n",tos);
    return stack[tos];
}
