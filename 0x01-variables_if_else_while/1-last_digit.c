#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
 */
int main(void)
{
int n; LastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
LastDigit = n % 10;
if (LastDigit > 5)
{
  printf("%d Last digit of\n", n, "is", LastDigit, "and is greater than 5");
}
else if (LastDigit == 0)
{
  printf("%d Last digit of\n", n, "is", LastDigit, "and is 0");
}
else
{
  printf("%d Last digit of\n", n, "is" LastDigit "and is less than 6 and not 0");
}
return (0);
}
