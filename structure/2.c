

//
// Created by sathya on 17/04/20.
//
#include <stdio.h>
struct date{
    int day,month,year;
}dt;
int main()
{
    char m[][12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int i;
    printf("Enter in dd-mm-yy\n");
    scanf("%d%d%d",&dt.day, &dt.month, &dt.year);
    if (dt.year/10000<1 && dt.month < 13 && dt.day < 32)
    {
        for(i=0;i<12;i++)
        {
            if(i+1==dt.month)
            {
                printf("%d-%s-%d",dt.day,m[i],dt.year);
            }

        }
    }
    else{
        printf("Please reconsider what u have typed");
    }
}



