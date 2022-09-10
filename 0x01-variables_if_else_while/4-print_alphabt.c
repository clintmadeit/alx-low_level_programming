#include <stdio.h>
/**
 * main - entry point
 * program function description
 * program that"prints alphabtes exept q and e"
 *
 * Return: Always 0
 */
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)

if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}

putchar('\n');

return (0);
}
