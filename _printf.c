#include "main.h"

/**
 * _printf - printf function
 * @format: format string
 *
 * Return: Number of characters
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (!format)
	return (-1);

	va_start(args, format);

	while (*format)
	{
	if (*format == '%')
	{
	format++;
	if (*format == 'c')
	count += _putchar(va_arg(args, int));
	else if (*format == 's')
	count += print_string(va_arg(args, char *));
	else if (*format == '%')
	count += _putchar('%');
	else if (*format == 'd' || *format == 'i')
	count += print_number(va_arg(args, int));
	else if (*format == 'u')
	count += print_unsigned(va_arg(args, unsigned int));
	else if (*format == 'o')
	count += print_octal(va_arg(args, unsigned int));
	else if (*format == 'x' || *format == 'X')
	count += print_hex(va_arg(args, unsigned int), *format == 'X');
	else if (*format == 'p')
	count += print_pointer(va_arg(args, void *));
	else
	count += _putchar('%') + _putchar(*format);
	}
	else
	count += _putchar(*format);
	format++;
	}

	va_end(args);
	return (count);
}


