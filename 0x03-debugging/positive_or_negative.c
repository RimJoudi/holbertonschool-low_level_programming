#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - test integer if positive or negative.
 * @i: integer.
 * Return: 0
 */
void positive_or_negative(int i)
{



	if (i > 0)
		printf("%i is positive\n", i);
	else if (i == 0)
		printf("%i is zero\n", i);
	else if (i < 0)
		printf("%i is negative\n", i);

}
