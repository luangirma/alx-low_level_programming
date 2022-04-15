#include "main.h"
/**
 * _isdigit - checkes if the no is b/n 0 to 9
 * @c: input no
 * Return: 1 if num is a digit, 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
