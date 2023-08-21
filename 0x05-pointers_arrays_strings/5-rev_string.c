#include "Main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: holds the string values
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}

