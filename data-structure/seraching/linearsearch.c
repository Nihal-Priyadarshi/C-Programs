//A program to implement linear search
#include<stdio.h>
int main()
{
    int var,ar[50],n,i,flag=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
        for(i=0;i<n;i++)
    {
        printf("Value.%d- ",i);
        scanf("%d",&ar[i]);      
    }
    printf("Enter the element to be searched for\n");
    scanf("%d",&var);

     for(i=0;i<n;i++)
    {
        if(ar[i]==var)
        {
            printf("The element %d is found at position %d",var,i+1);
            flag=1;
        }
              
    }
    if (flag==0)
    {
        printf("No such element exists");
    }
    return 0;
}