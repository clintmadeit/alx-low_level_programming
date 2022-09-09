#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 *Description:The program evaluates conditions for if and returns value for n
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code to evaluate and execute if statement */
	if (n > 0)
		/* evaluate and print the nature of integer n*/
	{printf("%i is positive\n", n);
	}
	else if (n == 0)
		/*evaluate and print the nature of integer n*/
	{
		printf("%i is zero\n", n);
	}
	else
		/*evaluate and print the nature of n*/
	{
		printf("%i is negative\n", n);
	}

	return (0);
}
