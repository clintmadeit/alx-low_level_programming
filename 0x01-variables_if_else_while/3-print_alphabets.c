#include <stdio.h>
/**
 * main - entry point
 * Description:using the main function
 * this program "prints alphabets in order of assending"
 *
 * Return: Always 0
 */
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');

return (0);
}
