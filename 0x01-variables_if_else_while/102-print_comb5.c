#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, l, k;

for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 56; j++)
{
for (l = 48; l <= 57; l++)
{
for (k = 49; k <= 57; k++)
{
if (i < l || (i == l && j < k))
{
putchar(i);
putchar(j);
putchar(' ');
putchar(l);
putchar(k);
if (!(i == 57 && j == 56 && l == 57 && k == 57))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
