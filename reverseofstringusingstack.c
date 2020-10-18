#include<stdio.h>
 #include<stdlib.h>
 #define SIZE 10
 #define TRUE 1
 #define FALSE 0
/**********************************************/
 struct stack
 {
     int TOP;
     int Item [SIZE];
 };
/**********************************************/

 struct stack S;

/**********************************************/
 void Initalize(void)
 {
     S.TOP=-1;
 }
 /**********************************************/

int Empty(void)
{
    if(S.TOP==-1)
        return TRUE;
        else
        return FALSE;
}
/**********************************************/
void Push( int x)
{

    if(S.TOP== SIZE-1)
    {
        printf("stack overflow");
    exit (1);
    }
    S.TOP=S.TOP+1;
    S.Item[S.TOP]=x;
}
/**********************************************/

 int Pop()
 {
    int x;
     if(Empty())
    {

     printf("stack underflow");
     exit(1);
    }
     x=S.Item[S.TOP];
     S.TOP=S.TOP-1;
     return x;
 }
  /**********************************************/
 rev( char str[])
 {
      Initalize();
    int  i=0;
    char x;
      while(str[i]!='\0')
      {
          Push(str[i]);
          i++;
      }
      while(!Empty())
      {
          x=Pop();
          printf("%c",x);
      }
 }
 /**********************************************/
 void main()
{
     char str[10];
     printf("ENTER THE STRING");
     gets(str);
     rev(str);

 }

