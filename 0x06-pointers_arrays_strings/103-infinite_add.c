#include "main.h"

/**
 * *infinite_add - adds two numbers
 * @n1: holds first char
 * @n2: holds second char
 * @r: holds third char
 * @size_r: holds int
 *
 * Return: Always r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	int i = len1 - 1;
	int j = len2 - 1;
	int k = size_r - 1;
	int carry = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int sum = carry;

		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}

		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}

		carry = sum / 10;
		r[k] = sum % 10 + '0';
		k--;
	}

	if (k < 0)
	{
		return (0);
	}

	memmove(r, r + k + 1, size_r - k - 1);
	r[size_r - k - 1] = '\0';
	return (r);
}
