//A program to print the largest and second largest element from a group of numbers
#include<stdio.h>
int main()
{
    int ar[50],i,size,max=0,smax=0,index;                      //smax is second largest max is largest
    printf("Enter the size (less than 30) ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
      
        printf("Value.%d- ",i);
        scanf("%d",&ar[i]);
       
    }       
    for(i=0;i<size;i++)
    {
        if(ar[i]>max)
        {
            
            max = ar[i];
            index=i;                               //index is the index of the largest array element
             
        }
    }
    for ( i = index; i < size-1 ; i++ )            //This is loop is for deleting the max element from the array
        ar[i] = ar[i+1];  
    
    for(i=0;i<size-1;i++)
    {
        if(ar[i]>smax)
        {
            smax=ar[i];           

        }
    }
    printf("Largest element is %d \nsecond largest element is %d\n",max,smax);



}