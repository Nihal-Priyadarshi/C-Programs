#include<stdio.h>
#include<conio.h>
int main()
{
    int decnum, binnum[50], i=0;
    printf("Enter any decimal number: ");
    scanf("%d", &decnum);
    while(decnum!=0)
    {
        binnum[i] = decnum%2;
        i++;
        decnum = decnum/2;
    }
    printf("\nEquivalent Binary Value = ");
    for(i=(i-1); i>=0; i--)
        printf("%d", binnum[i]);
    getch();
    return 0;
}
