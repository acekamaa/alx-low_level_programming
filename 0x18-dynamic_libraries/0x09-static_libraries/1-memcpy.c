#include "main.h"

/**
 * *_memcpy - copy memory
 * @dest: destination char
 * @src: source value char
 * @n: unsigned int
 *
 * Return: memcpy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
