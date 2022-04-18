#include "main.h"

/**
 * swap_int - swap the value of two integers.
 *
 * @a: first parameter input.
 * @b: second parameter input.
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}

