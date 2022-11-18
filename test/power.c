#include "main.h"

/**
 * power - calc power of base and int
 * @base: number base
 * @x: number
 *
 * Return: result
 */

long long int power(int base, int x)
{
	int result = 1;

	for (x; x > 0; x--)
	{
		result = result * base;
	}
	return (result);
}
