#include <stdio.h>
/**
 * main - entry point
 * program description
 * functions that "prints hexagonal numbers and leters"
 *
 * Return: Always 0
 */
int main(void)
{
char c;
for (c = '0' ; c <= '9' ; c++)

{
	putchar(c);
}

for (c = 'a' ; c <= 'f'; c++)
{
	putchar(c);
}

putchar('\n');

return (0);
}
