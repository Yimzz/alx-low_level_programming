#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char revLetter;

	for (revLetter = 'z'; revLetter >= 'a'; revLetter--)
	{
		putchar(revLetter);
	}
	putchar('\n');
	return (0);
}
