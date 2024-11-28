#include "main.h"

/**
 * print_string - Prints a string
 * @str: The string
 * 
 * Return: Number of characters
 */

int print_string(const char *str)
{
    int count = 0;

    if (!str)
        str = "(null)";

    while (*str)
    {
        count += _putchar(*str);
        str++;
    }

    return (count);
}
