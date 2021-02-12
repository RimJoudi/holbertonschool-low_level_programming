#include <stdio.h>
/**
 * main - prime factors.
 *
 * Return: 0.
 */
int main(void)
{
long int n, i;
n = 612852475143;
for (i = 3; i < (n / 2); i = i + 2)
{
while ((n % i == 0) && (n != i))
n = n / i;
}
printf("%ld\n", n);
return (0);
}
