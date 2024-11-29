#include "main.h"

/**
 * print_pointer - Prints a memory address
 * @p: The pointer
 *
 * Return: Number of characters
 */

int print_pointer(void *p)
{
    unsigned long address = (unsigned long)p;
    int count = 0;

    count += print_string("0x");
    count += print_hex(address, 0);

    return (count);
}
