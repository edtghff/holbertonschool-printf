#include "main.h"

/**
 * print_hex - Prints an unsigned integer in hexadecimal
 * @n: The unsigned integer to print
 * @uppercase: 1 for uppercase, 0 for lowercase
 *
 * Return: Number of characters
 */

int print_hex(unsigned int n, int uppercase)
{
	int count = 0;
	char hex_char;

	if (n / 16)
	count += print_hex(n / 16, uppercase);

	hex_char = (n % 16 < 10) ? (n % 16 + '0') :
	(n % 16 - 10 + (uppercase ? 'A' : 'a'));
	count += _putchar(hex_char);

	return (count);
}
