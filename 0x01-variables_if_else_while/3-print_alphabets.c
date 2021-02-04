#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
char j;
i = 'a';
j = 'A';
while (i <= 'z')
{
putchar(i);
i++;
}
while (j <= 'Z')
{
putchar(j);
j++;
}
putchar('\n');
return (0);
}
