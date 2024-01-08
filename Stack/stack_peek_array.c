#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
 int isfull(struct stack *s)
{
    if(s->top==s->size-1){
        return 1;
    }else{
        return 0;
    }

}
int isempty(struct stack *s)
{
    if(s->top==-1){
        return 1;
    }else{
        return 0;
    }
}

int peek(struct stack *sp,int i){
    int arrayInd=sp->top-i+1;
    if(arrayInd<0){
        printf(" not a valid for the stack");
        return -1;
    }else {
        return sp->arr[arrayInd];
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack has been created sucessfully\n");
    // isempty(sp);
    // isfull(sp);

    //push(sp, 2);

    for(int j;j<sp->top+1;j++){
          printf("the value at index %d is %d\n",j,peek(sp,j));

    }

    //printf("value of %d is push \n",pop(sp));
   

    return 0;
}