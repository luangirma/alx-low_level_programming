#include <stdio.h>
/**
 * main-entry point
 *
 * description:this c code prints the lowercase alphabet
 * Return: 0
 */
int main(void)
{
int d;

for (d = 0; d < 26; ++d)
putchar('a' + d);

putchar('\n');

return (0);
}
