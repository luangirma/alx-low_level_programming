#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
int count = 0;
char letter;

while (count++ <= 9)
{
for (n = 'a'; n <= 'z'; n++)
_putchar(n);
_putchar('\n');
}
}
