#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - entry point
 * @ac: holds args
 * @av: holds string array
 *
 * Return: result
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	result = malloc(sizeof(char) * (ac + 1));
	if (result == NULL)
		return (NULL);

	i = 0;
	for (; i < ac; i++)
	{
		strcat(result, av[i]);
		strcat(result, "\n");
	}
	return (result);
}
