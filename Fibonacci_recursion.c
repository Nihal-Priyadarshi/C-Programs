#include<stdio.h>
int fib(int limit, int f, int s,int i);
int main()
{
    int z,f=0,s=1,it=0;
    printf("Enter how many number --> ");
    scanf("%d",&z);
    printf("0  1  ");
    fib(z-2,f,s,it);
}
int fib(int limit,int f, int s, int i)
{
    int j,t;
    if (i<limit)
    {
        printf("  %d  ",f+s);
        t=s+f;
        fib(limit-1,s,t,i++);
    }
    
}