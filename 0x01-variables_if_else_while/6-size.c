#include <stdio.h>
/**
 * main -entry point
 * program description
 * function than "prints integers with putchar"
 *
 * Return: Always 0
 */
int main(void)
{
char i;

for (i = '0' ; i < 10 ; i++)
{
putchar(i);
}
putchar('\n');

return (0);
}
