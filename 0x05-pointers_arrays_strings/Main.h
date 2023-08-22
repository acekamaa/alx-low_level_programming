#ifndef MAIN_H
#define MAIN_H

/* reset_to_98 - resets value of @n to 98 */
void reset_to_98(int *n); /* n: here is a pointer to a parameter */
/* swap_int - swaps value @a with that of @b */
void swap_int(int *a, int *b); /* @a: and @b: are swap integer parameters */
/* _strlen - prints the length of string */
int _strlen(char *s); /* @s: returns the length of a string */
/* _strlen - prints the size of the string */
int _strlen(char *s); /* @s: returns size of the string */
/* _puts - prints a string */
void _puts(char *str); /* @str: prints a string */
/* print_rev - prints a string in reverse */
void print_rev(char *s); /* @s: prints a string in reverse */
/* rev_string - reverses a string */
void rev_string(char *s); /* @s: reverses a string that is in place */
void puts2(char *str); /* @str: prints every other character */
void puts_half(char *str); /* @str: prints half of a string */
void print_array(int *a, int n); /* @a: holds pointer */
void print_array(int *a, int n); /* @a: holds array of integer */
char *_strcpy(char *dest, char *src); 
#endif
