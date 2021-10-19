
#include<stdio.h>
struct bucket
{
    int count;
    int* value;
};
void bucketSort(int array[],int n)
{
    struct bucket buckets[3];
    int i,j,k,t;
    for (i=0;i<3;i++)
    {
        buckets[i].count = 0;
        buckets[i].value = (int*)malloc(sizeof(int) * n);
    }

    for (i=0;i<n;i++)
    {
        if(array[i]<11)
        {
            buckets[0].value[buckets[0].count++]=array[i];
        }
        else if(array[i]>30)
        {
            buckets[2].value[buckets[2].count++]=array[i];
        }
        else
        {
            buckets[1].value[buckets[1].count++] = array[i];
        }
    }
    printf("\nBefore sorting:\n");
    for(j=0;j<3;j++)
    {
        printf("Bucket %d contains:",j+1);
       for(i=0;i<buckets[j].count;i++)
       {

           printf("%d ",(buckets[j].value[i]));
       }
       printf("\n");
    }
    printf("\n");
    printf("After sorting:\n");

    //bubble sort
    for(k=0;k<3;k++)
    {
        for(i=0;i<(buckets[k].count)-1;i++)
      {
        for(j=0;j<(buckets[k].count)-1-i;j++)
        {
            if(buckets[k].value[j]>buckets[k].value[j+1])
            {
                t=buckets[k].value[j];
                buckets[k].value[j]=buckets[k].value[j+1];
                buckets[k].value[j+1]=t;
            }
        }
       }
    }


    for(i=0;i<3;i++)
    {
        printf("Bucket %d contains - ",i+1);
        for(j=0;j<buckets[i].count;j++)
            printf("%d ",buckets[i].value[j]);
        printf("\n");
    }
    k=0;
    for(i=0;i<3;i++)
        {
            for(j=0;j<buckets[i].count;j++)
            array[k++]=buckets[i].value[j];
        }
}

int main()
{
    int n, i;
    int arr[20];
    printf("Enter the no of elements");
    scanf("%d",&n);
    printf("\nEnter the values of the elements");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    bucketSort(arr,n);
    printf("Sorted array - ");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}

