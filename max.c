//A Program to find maximum of two numbers
#include<stdio.h>
int max(int x, int y);  //Function prototype
int main()
{
    int a,b;
    printf("Enter the two numbers --> ");
    scanf("%d%d",&a,&b);
    printf("The maximum of the two numbers %d %d is %d",a,b,max(a,b));    
}
//Function definition
int max(int x , int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
    
}