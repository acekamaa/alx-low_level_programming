#!/bin/bash
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
Betty();
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	printf("%d\n",n);
	if ( n > 0) {
	printf("is positive");
	else
	if (n == 0){
	printf("is zero")
	else 
	if (n < 0){
	printf("is negative")
	}
	}
	}
	return (0);
}
