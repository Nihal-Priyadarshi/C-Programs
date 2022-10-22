//Program to check whether a number is Harshad Number or not
#include <stdio.h>    

int main()    
{    int num;
    printf("Enter a number\n"); 
    scanf("%d",&num);
    int rem = 0, sum = 0, n;    

    //Make a copy of num and store it in variable n    
    n = num;    

    //Calculates sum of digits    
    while(num > 0){    
        rem = num%10;    
        sum = sum + rem;    
        num = num/10;    
    }    

    //Checks whether number is divisible by sum of digits    
    if(n%sum == 0)    
        printf("%d is a harshad number", n);    
    else    
        printf("%d is not a harshad number", n);    

    return 0;    
}    
