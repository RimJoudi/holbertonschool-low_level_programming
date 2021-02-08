#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, l;
for (i = 48; i <= 57; i++)
{
for (j = 49; j <= 57; j++)
{
for (l = 50; l <= 57; l++){
if(l > j && j > i)
{
putchar(i);
putchar(j);
putchar(l);
if (i < 55)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
