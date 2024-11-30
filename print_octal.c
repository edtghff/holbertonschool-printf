#include "main.h"

/**
 * print_octal - Prints an unsigned integer in octal
 * @n: The unsigned integer
 *
 * Return: Number of characters
 */

int print_octal(unsigned int n)
{
	int count = 0;

	if (n / 8)
	count += print_octal(n / 8);

	count += _putchar((n % 8) + '0');

	return (count);
}

