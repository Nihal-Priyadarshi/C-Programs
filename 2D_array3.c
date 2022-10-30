// 2D array                 *** taking 2D array size and value by user and print ***
#include<stdio.h>
int main()
{
    int i,j,x,y;
    printf("*** Welcome to 2 Dimensionel array ***");
    printf("\nHow many rows in the array:  ");
    scanf("%d", &x);
    printf("\nHow many columns in the array:  ");
    scanf("%d", &y);
    int arr[x][y];
    printf("\nYou have selected %d rows and %d columns ", x,y);
    printf("\nNow Enter %d values :  ", x*y);
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        scanf("%d", &arr[i][j]);
    }
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        printf("%d\t", arr[i][j]);
        printf("\n");
    }
return 0;
}
