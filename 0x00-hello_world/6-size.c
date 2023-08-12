#include<stdio.h>
/*
 * main is entry point
 * return 0 if success
 * install libc6-dev-i386 to run -m32 gcc
 */
int main(void)
{
	printf("size of char:%d bytes \n", sizeof(char));
	printf("size of int: %d bytes \n", sizeof(int));
	printf("size of long int: %d bytes \n", sizeof(long int));
	printf("size of long long int:%d bytes \n", sizeof(long long int));
	printf("sizeof float: %d bytes \n", sizeof(float));
			return(0);
}
