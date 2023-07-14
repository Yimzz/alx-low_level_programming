#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int f, s;

	for (f = 48; f <= 56; f++)
	{
		for (s = 49; s <= 57; s++)
		{
			if (s > f)
			{
				putchar(f);
				putchar(s);
				if (f != 56 || s != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
