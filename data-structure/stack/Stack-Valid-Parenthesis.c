#include <stdio.h>
#define SIZE 15

// Stack Implementation
char stack[SIZE];
int top = -1;

void push(char c) {
    if (top >= SIZE-1) {
        printf("Make stack bigger \n");
        return;
    }
    top++;
    stack[top] = c; 
}

char pop() {
    if (top == -1) {
        printf("Stack is empty \n");
        return ' ';
    }
    top--;
    return stack[top+1];
}

char peek() {
    if (top == -1) {
        printf("Stack is empty \n");
        return '\0';
    }
    printf("peek -> %c", stack[top]);
    return stack[top];
}

void print() {
    if (top == -1) {
        printf("Nothing to print \n");
        return;
    }
    int i = top; 
    printf("\n");
    while(i >= 0) {
        printf(" | %c |\n", stack[i]);
        i--;
    }
    printf(" '''''\n");
}

int isValid(char *str) {
    if (str[0] == '\0') return 0;
    char c;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ')') {
           c = pop();
           if ( c != '(') return 0;
        }else if (str[i] == ']') {
           c = pop();
           if ( c != '[') return 0;
        }else if (str[i] == '}') {
           c = pop();
           if ( c != '{') return 0;
        } else {
            push(str[i]);
        }             
    }
    c = peek();
    if(c == '\0') {
        return 1;
    } else {
        return 0;
    }   
}

// Main Function
int main()
{
    char str[15] = "{[]}";
    int flag = isValid(str);
    if (flag == 1) {
       printf("Valid Set\n");
    } else {
       printf("Invalid Set\n");
    }
    return 0;
}

