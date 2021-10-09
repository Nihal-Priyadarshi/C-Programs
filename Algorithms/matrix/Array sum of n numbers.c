/*
 ============================================================================
 Name        : array.c
 Author      : LIJIN DANIEL JOSEPH
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l,i,sum=0,a[100];
	printf("ENTER THE ARRAY LIMIT:");
	scanf("%d",&l);
	printf("ENTER THE VALUES:");
	for(i=0;i<l;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];

	}
	for(i=0;i<l;i++){
		printf("+%d",a[i]);
	}
	printf("=%d",sum);
		return EXIT_SUCCESS;
}
