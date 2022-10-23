#include<stdio.h>
#define max 5
int a_queue[max];
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
int isfull();
int isempty();
void peek();
void tranversal();
int main(){
    int ch,x;
    do{
    printf("\n1.insert\t2.delete\t3.checkfull\t4.check empty\t5.front element\t6.display queue\t7.exit\n");
    printf("enter your choice:\t");
    scanf("%d",&ch);
     switch(ch){
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:x=isfull();
            if(x==1)
	           printf("\nqueue is full");
	           else
	           printf("\nnot full");
            break;
            case 4:x=isempty();
            if(x==1)
	           printf("\nqueue is empty");
	           else
	           printf("\nnot empty");
	           break;
            case 5:peek();
            break;
            case 6:tranversal();
            break;
            }
    }while(ch!=7);
}
void enqueue(){
    int item;
    if(!isfull()){
        printf("\nenter the element to insert:\n");
        scanf("%d",&item);
        if(front==-1 && rear==-1)
        {
            front=rear=0;
        }
        else{
            rear=(rear+1)%max;
        }
        a_queue[rear]=item;
    }
}
void dequeue(){
    int value;
    if(!isempty()){
        value=a_queue[front];
        printf("\ndeleted element is:%d",value);
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%max;
        }
    }
}
int isfull(){
    if(rear==(front+1)%max){
        printf("queue is full\n");
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(){
    if(front==-1 && rear==-1){
        printf("queue is empty\n");
        return 1;
    }
    else{
        return 0;
    }
}
void peek(){
    if(!isempty())
    {
        printf("front element is:%d",a_queue[front]);
    }
}
void tranversal(){
    if(!isempty()){
        printf("queue element is:");
        if(front<rear){
        for(int i=front;i<=rear;i++){
            printf("%d\t",a_queue[i]);
        }}
        else{
           for(int i=0;i<=rear;i++){
            printf("%d\t",a_queue[i]);
            } 
            for(int i=front;i<=max-1;i++){
            printf("%d\t",a_queue[i]);
        } 
        }
    }
}
