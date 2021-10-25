#include<stdio.h>
#include<stdlib.h>

void insertion(int *a,int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		int y=a[i];
			j=i;
		
		while(j > 0 && y < a[j-1])
		{	
			a[j]=a[j-1];
			j--;
		}
		a[j]=y;
	}
}

void main()
{
	int *a,i,n;
	printf("Enter n : ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	insertion(a,n);
	
	printf("Sorted Array : ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
