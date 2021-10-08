#include<stdio.h>
void main()
{
	int i,j,n1,n2,S1[20],S2[20];
	printf("Enter the no of element you want in Set1");
	scanf("%d",&n1);
	printf("Enter the elements in the Set1");
	for(i=0;i<n1;i++)
	scanf("%d",&S1[i]);
	printf("Enter the no of element you want in Set2");
	scanf("%d",&n2);
	printf("Enter the elements in the Set2");
	for(i=0;i<n2;i++)
	scanf("%d",&S2[i]);
	//Cartesian product
	printf("Cartesian product of two given sets is:\n{");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("(%d,%d)",S1[i],S2[j]);
		}
	}
	printf("}");
}
	
