#include<stdlib.h>
#include<stdio.h>
 
struct node{
    int data;
    struct node* link;
 };

 //adding element in empty list
struct node* addToEmpty(int data)
{
    struct node* temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=temp;
    return temp;
}
//adding element at beginning
struct node* addToBeg(struct node*tail,int data)
{
    struct node *newP=malloc(sizeof(struct node));
    newP->data=data;
    newP->link=tail->link;
   tail->link=newP;
   return tail;
}

//adding element at end

struct node* addAtEnd(struct node* tail,int data)
{
    struct node* newP=malloc(sizeof(struct node));
    newP->data=data;
    newP->link=NULL;
    newP->link=tail->link;
    tail->link=newP;
    tail=tail->link;
    return tail;
}

void print(struct node* tail)
{
    struct node* p=tail->link;
    do{
        printf("%d\n",p->data);
        p=p->link;
    }while(p!=tail->link);

}

int main()
{struct node*tail;
tail=addToEmpty(45);
tail=addToBeg(tail,34);
tail=addAtEnd(tail,50);
print(tail);
return 0;
}