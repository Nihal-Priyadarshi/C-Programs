#include <stdio.h>
#include <conio.h>
#include <string.h>

// declaring recursive function
void string_reverse(char str[])
{
    char str2[100];
    int a;
    a = strlen(str);
    printf("The length of the string is %d\n", a);
    strcpy(str2, str);
    strrev(str2);
    printf("The reverse of the word of the string is :");
    for (int i = 0; i < a; i++)
    {
        if (str2[i + 1] == ' ' || str2[i + 1] == '\0')
        {
            for (int j = i; j >= 0 && str2[j] != ' '; j--)
            {
                printf("%c", str2[j]);
            }
            printf(" ");
        }
    }
    printf("\n");
}

void main()
{
    char str[100];
    printf("Enter the string \n");
    gets(str);
    string_reverse(str);
    strrev(str);
    printf("The reverse of the string is: %s\n", str);
}
