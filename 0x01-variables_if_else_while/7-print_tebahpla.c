#include <stdio.h>
/**
 * main - entry point
 * program description
 * function that "prints alphabets in descemding order"
 *
 * Return: Always 0
 */
int main(void)
{
char a;
for (a = 'z' ; a >= 'a' ; a--)

{
putchar(a);
}

putchar('\n');

return (0);
}
