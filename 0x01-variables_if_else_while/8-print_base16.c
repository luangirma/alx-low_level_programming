#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
char m;

for (m = '0'; m <= '9'; ++m)
putchar(m);
for (m = 'a'; m <= 'f'; ++m)
putchar(m);

putchar('\n');

return (0);
}
