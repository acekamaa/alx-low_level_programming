#include "main.h"

/**
 * count_word - counts word
 * @s: holds char
 *
 * Return: words
 */
int count_word(char *s)
{
	int flag = 0;
	int c;
	int w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * **strtow - splits a string into words.
 * @str: holds char
 *
 * Return: answer
 */
char **strtow(char *str);
{
	char **m, *tmp;
	int i;
	int k = 0, len = 0, c = 0, words, start, end;

	while (*(str + len))
	{
		len++;
		words = count_word(str);
	}
	if (words == 0)
	{
		return (NULL);
	}
	m = (char **) malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
				{
					*tmp++ = str[start++];
				}
				*tmp = '\0';
				m[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			start = i;
		}
	}
	m[k] = NULL;
	return (m);
}
