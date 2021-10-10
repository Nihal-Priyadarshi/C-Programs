#include <stdio.h>
#include<stdlib.h>
#define max 10
struct node
{
  int info;
  struct node *link;
} *front=NULL,*rear=NULL;
void enqueue(int n)
{
  struct node *tmp;
  tmp=(struct node *)malloc(sizeof(struct node));
  if(tmp==NULL)
  {
    printf("Memory not availabl");
    return ;
  }
  tmp->info=n;
  tmp->link=NULL;
  if(front==NULL)
  front=tmp;
  else
  rear->link=tmp;
  rear=tmp;
}
int dequeue()
{
  struct node *tmp;
  int item;
  if(front==NULL)
  {
    printf("Queue is empty");
    return 0 ;
  }
  tmp=front;
  front=front->link;
  item=tmp->info;
  free(tmp);
  return item;
}
int peek()
{
  int item;
  if(front==NULL)
  {
    printf("queue is empty");
    return 0;
  }
  item =front->info;
  return item;
}
void display()
{
  struct node *tmp;
  tmp=front;
  if(isEmpty())
  {
    printf("queue is empty");
    return ;
  }
  printf("Queue is :");
  while(tmp!=NULL)
  {
    printf("%d\t",tmp->info);
    tmp=tmp->link;
  }
}
int isEmpty()
{
  if(rear==NULL)
  return 1;
  else return 0;
}

int main(void) {
  int choice,item ;
  while(1)
  {
    printf("\n1.push\n");
    printf("2.pop\n");
    printf("3.peek\n");
    printf("4.display\n");
    printf("5.EXIT");
    printf("\nEnter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1: printf("Enter the item to be inserted:");
              scanf("%d",&item);
              enqueue(item);
              break;
      case 2: item =dequeue();
              if(item==0)
              return 0;
              else
              printf("The deleted element is %d",item);
              break;
      case 3: item =peek();
              printf("Element present at the top of the queue is %d",item);
              break; 
      case 4: 
              display();
              break;
      case 5 : exit (1);
      default : printf("Wrong choice");
       
    }

  }
  return 0;
}
