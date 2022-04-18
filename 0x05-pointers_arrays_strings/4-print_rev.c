#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int leng;

	for (leng = 0; s[leng] != '\0'; leng++)
	{
	}

	for (i = leng - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
