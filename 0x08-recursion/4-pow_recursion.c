#include <stdio.h>
/**
 * _pow_recursion - returns the value of the power of @x to @y
 * @x:input value
 * @y:input value
 *
 * Return: Always 0 (Succes)
 */

int _pow_recursion(int x, int y)
{
	if (x == 0)
	{
		return (0);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (x == 0 && y == 0)
	{
		return (0);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
