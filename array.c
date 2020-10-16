#include<stdio.h>
#include<conio.h>
void read_array(int arr[], int);
void display_array(int arr[], int);

int main()
{
int num[10],n;
clrscr();
printf("Enter the size of the array:");
scanf("%d",&n);
read_array(num,n);
display_array(num,n);
getch();
return(0);
}
void read_array(int arr[10], int n)
{
int i;
printf("\n Enter the %d elements of the array:",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
}
void display_array(int arr[10], int n)
{
int i;
printf("\n The elements of the array are:");
for(i=0;i<n;i++)
printf("\t %d",arr[i]);
}
