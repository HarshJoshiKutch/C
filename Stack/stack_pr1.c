//create a stack and perform operation on stack
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 5;

int stack[5];
int top=-1;

void push()
{
   int x;
    printf("enter the data:");
    scanf("%d",&x);

    if(top==5-1)
    {
        printf("overflow");
    }else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int item;
    
    if (top==-1)
    {
        printf("stack is overflow");
    }else
    {
        top--;
    }
}

void peek()
{
    if(top==-1)
    {
        printf("stack is empty");
    }else
    {
        printf("%d",stack[top]);
    }
}

void display()
{
    int i;
    for(int i=top; i>=0; i--)
    {
        printf("%d",stack[i]);
    }
}

int main ()
{
    int ch;
    do
    {
        printf("enter the choice:\n1:push\n2:pop\n3:peek\n4:display\n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;
            
        case 3:
            peek();
            break;
            
        case 4:
            display();
            break;

        default:
        printf("invalid choice:");
          break;
        }
    } while (ch!=0);
    

}