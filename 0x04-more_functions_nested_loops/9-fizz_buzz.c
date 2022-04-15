#include <stdio.h>

/**
 * main - main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 *
 * Return: int
 */

int main(void)
{
int x;

for (x = 1; x <= 100; x++)
{
if (x % 3 == 0 && x % 5 != 0)
{
printf("Fizz");
}
else if (x % 3 != 0 && x % 5 == 0)
{
printf("Buzz");
}
else if (x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", x);
}
if (x != 100)
putchar(' ');
else
putchar('\n');
}
return (0);
}
