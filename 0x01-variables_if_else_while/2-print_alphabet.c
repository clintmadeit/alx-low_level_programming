#include <stdio.h>
/*
 * Main - Entry point: prints alphabets in lower case to the screen
 *
 * Description: "a function that puts alphabetic characters on screen"
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char ch;
	{
	for (ch = 'a'; ch <= 'z'; ch++)

	putchar(ch);
	}

	{
	putchar('\n');
	}
	return (0);
}
