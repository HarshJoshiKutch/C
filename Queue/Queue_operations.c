#include<stdio.h>
#include<stdlib.h>
#define N 5 

int queue[N];
int front;
int rear;

void enqueue(int x){
    if(rear=N-1){
        printf("Queue is overflow");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x; // insert from rear
    }
    else{
        rear++;
        queue[rear]=x;
    }

}

void dequeue(){
    if(front==-1&& rear==-1){
        printf("underflow condition");
    }
    else if (front==rear)
    {
        front=rear=-1;
    }
    else{
        printf("%d\n",queue[front]);
        front++;
    }
}

void display(){
    int i;
    if(front==-1&& rear==-1){
        printf("queue is empty");
    }
    else{
        for(int i=front;i<rear+1;i++){
            printf("%d\n",queue[i]);
        }
    }
}

void peek(){
    if (front==-1&& rear==-1)
    {
        printf("queue is empty");
    }
    else{
        printf("%d\n",queue[front]);

    }
}



void main()
{
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    // peek();
    // dequeue();
    // peek();
    // display();
    
    // printf("enter the choice");
    // printf("\n1:")


}