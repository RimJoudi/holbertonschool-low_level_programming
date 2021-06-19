#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, l, k;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		for (l = 0; l <= 9; l++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i < l || (i == l && j < k))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(l + '0');
					putchar(k + '0');
					if (!(i == 9 && j == 8 && l == 9 && k == 9))
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
