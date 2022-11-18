#include "main.h"

/**
 * print_decimal - function to print decimal
 * @value: number value
 *
 * Return: count
 */
int print_decimal(int value)
{
	int count = 0;

	/*print - for negative number*/
	if (value < 0)
	{
		count += _putchar('-');
		value = value * -1;
	}

	/*print last digit of a number after and remaining digit using recursion*/
	if (value / 10)
		count += print_decimal(value / 10);
	count += _putchar(value % 10 + '0');

	return (count);
}
