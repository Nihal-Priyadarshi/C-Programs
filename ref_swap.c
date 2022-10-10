#include<stdio.h>
struct data
{
    int year;
    int month,day;
}date;
int main()
{
    int var=45-date.day;
    printf("Enter the day month and year");
    scanf("\n%d%d%d",&date.day,&date.month,&date.year);
    printf("\n%d-%d-%d",date.day,date.month,date.year);
    printf("\nAfter 45 days");
    if(date.day+15>30 && date.month%2==0 && date.month !=2)
    {
        printf("\n%d-%d-%d",date.day+15,date.month+2,date.year);
    
    }
    else if(date.day+15<30 && date.month%2==0 &&date.month !=2)
    {
        printf("\n%d-%d-%d",date.day+15,date.month+1,date.year);
    }
    if(date.day+14>31 && date.month%2!=0 && date.month !=2)
    {
        printf("\n%d-%d-%d",date.day+15,date.month+2,date.year);
    }
    else if(date.day+14<31 && date.month%2!=0 &&date.month !=2)
    {
        printf("\n%d-%d-%d",date.day+14,date.month+1,date.year);
    }
    else if(date.day+17>28 && date.month ==2)
    {
        printf("\n%d-%d-%d",date.day+17,date.month+2,date.year);
    }
     else if(date.day+16>29 && date.month ==2 && date.year %100==0||date.year %4==0||date.year %400==0)
    {
        printf("\n LEAP YEAR \n%d-%d-%d",date.day+16,date.month+2,date.year);
    }
    else if(date.day+17<29 && date.month ==2 && date.year %100==0||date.year %4==0||date.year %400==0)
    {
        printf("\n  LEAP YEAR \n %d-%d-%d",date.day+16,date.month+1,date.year);
    }
     else if(date.day+16<28 && date.month ==2)
    {
        printf("\n%d-%d-%d",date.day+var,date.month,date.year);
    }
    
}
