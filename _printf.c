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
                count += print_string(va_arg(args, int));
        }
    }
}