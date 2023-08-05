#include <stdio.h>
/**
 * factorial - returns the factorial
 * @n:input value
 *
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
