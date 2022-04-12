#include <stdio.h>

/**
 * main - entry point
 *
 * Description: all single digit numbers of base 10 starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
char n;

for (n = '0'; n <= '9'; ++n)
putchar(n);

putchar('\n');

return (0);
}
