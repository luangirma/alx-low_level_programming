#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the lowercase alphabet in reverse, followed by a new line.
 * Return: 0
 */
int main(void)
{
char a;

for (a = 'z'; a >= 'a'; --a)
putchar(a);

putchar('\n');

return (0);
}
