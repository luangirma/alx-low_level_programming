#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
int n, m;

if (size > 0)
{
for (n = 0; n < size; n++)
{
for (m = 0; m < size; m++)
{
if ((size - n - 1) > m)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
