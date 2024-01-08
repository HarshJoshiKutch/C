#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
// int isfull(struct stack *s)
// {
//     if(s->top==s->size-1){
//         return 1;
//     }else{
//         return 0;
//     }

// }
// int isempty(struct stack *s)
// {
//     if(s->top==-1){
//         return 1;
//     }else{
//         return 0;
//     }
//}

void push(struct stack *s, int value)
{
    if (s->top == s->size - 1)
    {
        printf("stack is overflow");
    }
    else
    {
        s->top++;
        s->arr[s->top] = value;
    }
}

int pop(struct stack *s)
{
    int val;
    if (s->top == -1)
    {
        printf("stack is underflow");
    }
    else
    {
        val = s->arr[s->top];
        s->top--;
        return val;
    }
}
// void peek(struct stack *s){
"?:"
// }

// void display(struct stack *s){

// }

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack has been created sucessfully\n");
    // isempty(sp);
    // isfull(sp);

    push(sp, 2);

    printf("value of %d is push \n",pop(sp));

    return 0;
}