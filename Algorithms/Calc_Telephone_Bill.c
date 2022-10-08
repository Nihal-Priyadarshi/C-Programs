#include<stdio.h>
#include<conio.h>
int main()
{
    int noOfCall, tempNoOfCall, charge;
    printf("Enter total unit of calls made this month: ");
    scanf("%d", &noOfCall);
    printf("\n");
    if(noOfCall<=200)
    {
        printf("You have not crossed the limit of 200 calls");
        printf("\nNo charge.");
    }
    else
    {
        if(noOfCall<=500)
        {
            tempNoOfCall = noOfCall - 200;
            charge = tempNoOfCall * 1;
            printf("The charge you have to paid = %d", charge);
        }
        else
        {
            tempNoOfCall = noOfCall - 500;
            charge = tempNoOfCall * 2;
            charge = charge + 300;
            printf("The charge you have to paid = %d", charge);
        }
    }
    getch();
    return 0;
}
