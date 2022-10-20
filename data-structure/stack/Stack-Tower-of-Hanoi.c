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

// Soln -> Tower of Hanoi
void towerOfHanoi(int n, char fromRod, char toRod, char auxRod) {
   if (n == 1) {
       printf("\n Moved disk 1 from rod %c to rod %c", fromRod, toRod);
       return;
   }
   
    towerOfHanoi(n-1, fromRod, auxRod, toRod);
    printf("\n Moved disk %d from rod %c to rod %c", n, fromRod, toRod);
    towerOfHanoi(n-1, auxRod, toRod, fromRod); 
}

// Main Function
int main()
{
    char fromRod = 'A';
    char toRod = 'C';
    char auxRod = 'B';
    towerOfHanoi(4, fromRod, toRod, auxRod);
    // Answer to Compare the Results
    printf("\n===================================");
    printf("\n Move disk 1 from rod A to rod B");
	printf("\n Move disk 2 from rod A to rod C");
	printf("\n Move disk 1 from rod B to rod C");
	printf("\n Move disk 3 from rod A to rod B");
	printf("\n Move disk 1 from rod C to rod A");
	printf("\n Move disk 2 from rod C to rod B");
	printf("\n Move disk 1 from rod A to rod B");
	printf("\n Move disk 4 from rod A to rod C");
	printf("\n Move disk 1 from rod B to rod C");
	printf("\n Move disk 2 from rod B to rod A");
	printf("\n Move disk 1 from rod C to rod A");
	printf("\n Move disk 3 from rod B to rod C");
	printf("\n Move disk 1 from rod A to rod B");
	printf("\n Move disk 2 from rod A to rod C");
	printf("\n Move disk 1 from rod B to rod C");
    return 0;
}
