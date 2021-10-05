#include <stdio.h>
#include <string.h>

#define MAX 1000

int top=-1;
int item;

char stack_string[MAX];

void pushChar(char item);

//function to pop character (item)
char popChar(void);

//function to check stack is empty or not
int isEmpty(void);

//function to check stack is full or not
int isFull(void);

int main()
{
    char str[MAX];

    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s",str); //read string with spaces

    for(i=0;i<strlen(str);i++)
        pushChar(str[i]);

    for(i=0;i<strlen(str);i++)
        str[i]=popChar();

    printf("Reversed String : %s\n",str);

    return 0;
}

void pushChar(char item)
{
    //check for full
    if(isFull())
    {
        printf("\nStack is FULL !!!\n");
        return;
    }

    top=top+1;
    stack_string[top]=item;
}

 char popChar()
{
    if(isEmpty())
    {
        printf("\nStack is EMPTY!!!\n");
        return 0;
    }

    //pop item and decrease top
    item = stack_string[top];
    top=top-1;
    return item;
}

int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
