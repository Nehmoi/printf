#include "main.h"

/**
 * print_unsigned - a function to print unsigned int
 * @value: number used
 * Return: count
 */

int print_unsigned(unsigned int value)
{
	int count = 0;

	if (value / 10)
		count += print_decimal(value / 10);
	count += _putchar(value % 10 '\0');

	return (count);
}
