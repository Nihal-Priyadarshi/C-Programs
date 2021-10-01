//using selection sort..sorting an array in ascending order.....
#include<stdio.h>
#include<stdlib.h>
void main()
{
   int n,*p,i,j,min,temp,k;
   printf("enter the size of an array:\n");
   scanf("%d",&n);

   p=(int*)calloc(n,4);

  if(p==NULL)
   {
       printf("error!!");
       exit(1);
   }

  printf("enter the elements of the array:\n");

  for(i=0;i<n;i++)
  {
      scanf("%d",(p+i));
  }

  printf(" after sorting the array in ascending order using selection sort...\n");

  for(i=0;i<n-1;i++)
  {
      min=i;
      for(j=i+1;j<n;j++)
      {
          if(*(p+j)<*(p+min))
          {
              min=j;
          }

      }
      temp=*(p+i);
      *(p+i)=*(p+min);
      *(p+min)=temp;

       printf("modified array:");

      for(k=0;k<n;k++)
      {

          printf(" %d",*(p+k));
      }
          printf("\n");

  }


}










