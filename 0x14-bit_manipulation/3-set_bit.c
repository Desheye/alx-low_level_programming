#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1.
 * @n: A pointer to the number to set the bit in.
 * @index: The index to set the bit at.
 * Return: 1 if it worked, or -1 on error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= (sizeof(*n) * 8))
        return (-1);

    *n |= (1ul << index);
    return (1);
}

