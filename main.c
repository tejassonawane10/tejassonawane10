#include<stdio.h>
#include"header.h"

void main()
{
	printf("\ni am in main.c\n");
	printf("\nCalling hello function here");
	hello();
	printf("\nCalling add function here\n");
	add(3,5);
	printf("\nBack in main\n");
	
}
