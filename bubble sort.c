#include<stdio.h>
 int main()
{
    int a[20],i,n,j, temp;

    printf("enter the no of element");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
         for(j=0;j<n-i-1;j++)
        {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    }
         printf(" sorted element:");
         for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }

return 0;
}

