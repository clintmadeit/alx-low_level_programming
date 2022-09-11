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
	int i;

	for (i = 01; i <= 99; i++)

	if (!(i = 10 || 11 || 22 || 33 || 44 || 55 || 66 || 77 || 88 || 99))

	{	putchar(i);

		if (i != 98)

		{	putchar(',');

			putchar(' ');

		}
	}
		putchar('\n');

		return (0);
}
