//
//  main.c
//  implement of linear queue
//
//  Created by Vikram kumar on 24/10/21.
//

#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define size 100
int arr[size];
int front=-1,rear=-1;
void enqueue(int x)
{
    if (rear==size-1)
    {
        printf("queues is full");
    }
    else if (front==-1&&rear==-1)
    {
        front=0,rear=0;
        arr[rear]=x;
    }
    else
    {
        ++rear;
        arr[rear]=x;
    }
}
void dequeue()
{
    if (front==-1&&rear==-1)
    {
        printf("queue is empty");
        return;
    }
    else if (front==rear)
    {
        front=-1;rear=-1;
    }
    else
    {
        ++front;
    }
}
bool is_empty()
{
    if (front==-1&&rear==-1)
    {
        return true;
    }
    else false;
}
void print()
{
    printf("\n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ",arr[i]);
    }
}
int intmain()
{
    int x,n;
    while(1)
    {
        printf("\n\n***** MENU *****\n");
        printf("1. insert\n2. remove\n3. DIsplay\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: printf("Enter the value to be inserted: ");
                scanf("%d",&x);
                enqueue(x);
                break;
            case 2: dequeue();
                break;
            case 3: print();
                break;
            case 4: exit(0);
            default:printf("\nWrong selection!!! Try again!!!");
            
        }
    }
}


