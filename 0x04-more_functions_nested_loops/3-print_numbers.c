#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{

int x;

x = 0;

for (x = 0; x < 10; x++)

_putchar(x + '0');

_putchar ('\n');
}
