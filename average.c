#include<stdio.h>

int main () {
	int num1 , num2 , num3 , sum; 
	float avg;
	printf("Enter 3 numbers\n");
	scanf(" %d%d%d", &num1 ,&num2, &num3);
	
	sum = num1 + num2 + num3;
	avg = sum / (float)3;
	
	printf("Average of %d , %d and %d is %.2f", num1 , num2, num3, avg);
	
	return 0;
}
