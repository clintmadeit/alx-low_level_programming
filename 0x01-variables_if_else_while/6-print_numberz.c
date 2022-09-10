#include <stdio.h>
/**
 * main - entry point
 * program that prints digits 0 - 10 followed by new line
 * this function prints "integers using char"
 *
 * Return: Always 0
 */
int main(void)
{
char i;
for (i = 0; i < 10; i++)

{
	putchar(i);
}

putchar('\n');

return (0);
}
