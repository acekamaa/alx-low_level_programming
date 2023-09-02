#include "main.h"

/**
 * main - prints number of arguments
 * @argc: holds int
 * @argv: holds char
 *
 * Return: ALways 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
