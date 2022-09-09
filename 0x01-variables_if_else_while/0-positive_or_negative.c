#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * program with main function that prints positive, zero and negative
 *
 * return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code to evaluate and execute if statement */
	if (n > 0)
	{printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}

	return (0);
}
