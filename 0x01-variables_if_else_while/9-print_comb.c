#include <stdio.h>
/**
 * main - entry point
 * program description
 * function that "prints integers separated by comma and space"
 *
 * Return: Always 0
 */
int main(void)
{
char i;
for (i = '0' ; i <= '9' ; i++)
{
	putchar(i);

	putchar(',');

	putchar(' ');
}
putchar('\n');

return (0);
}
