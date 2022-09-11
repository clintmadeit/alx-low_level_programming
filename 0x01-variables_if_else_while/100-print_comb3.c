#include <stdio.h>
/**
 * main - entry point
 * programs description
 * function that "prints all possible 2 digit number combination"
 *
 * Return: Always 0
 */
int main(void)
{
	int d1, d2;

	for (d1 = '0' ; d1 <= '9' ; d1++)
	{
		for (d2 = '1' ; d2 <= '9' ; d2++)
		{
			if (d1 != d2 && d1 < d2)
			{
				putchar(d1);

				putchar(d2);

				if (!(d1 == '8' && d2 == '9'))

				{	putchar(',');

					putchar(' ');
				}

			}

		}

	}

	putchar('\n');

	return (0);
}
