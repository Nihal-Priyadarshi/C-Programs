/*  C Program to Count Number of Characters in a string  */

#include<stdio.h>
int main(){
    char str[20];
    int i=0;
    printf("\nEnter the string: ");
    gets(str);
    while(str[i]!='\0')
        i++;
    printf("\nLength of [ %s ] is [ %d ]\n", str, i);
    return 0;
}
