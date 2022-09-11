#include <stdio.h>
/**
 * main - entry point
 * program description
 * function that "prints 2 digit numbers in pairs"
 *
 * Return: Always 0
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 98; tens++)
	{
		for (ones = tens + 1; ones <= 99; ones++)
		{
			putchar((tens / 10) + '0');
			putchar((tens % 10) + '0');
			putchar(' ');
			putchar((ones / 10) + '0');
			putchar((ones % 10) + '0');
			if (!(tens == 98 && ones == 99))
			{
				putchar(',');
				putchar(' ');

			}

		}

	}
	putchar('\n');
	return (0);
}
