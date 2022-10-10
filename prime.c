//A program to print the prime numbers from a group of numbers
#include<stdio.h>
int main()
{
    int ar[50],i,size,j,flag;                      
    printf("Enter the size (less than 30) ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Value.%d- ",i+1);
        scanf("%d",&ar[i]);
        
    }
    for(i=0;i<size;i++)
    {
        flag=1;
        for(j=2;j<=ar[i]/2;j++)
        {
                if(ar[i]%j==0)
                {
                  flag=0;
                  break;
                }       
        }
        if(flag==1)
        {
            printf("%d\n",ar[i]);
        }
        
    }    
            
}
    

