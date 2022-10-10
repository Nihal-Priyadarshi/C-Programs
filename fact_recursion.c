//A Program to find factorial using recursion
#include<stdio.h>
int fact(int x);
int main()
{
    int n;
    printf("Enter the value of number --> ");
    scanf("%d",&n);
    printf("%d",fact(n));
}
int fact(int x)
{
    int res=1;
    if(x==0)
    {
        res*=1;
    }
    else
    {
        res = x*fact(x-1);
    }
    return res;
    
}