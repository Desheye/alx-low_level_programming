#include "main.h"

/**
 * clear_bit - Sets a bit at a given index to 0.
 * @n: A pointer to the number to clear the bit in.
 * @index: The index to clear the bit at.
 * Return: 1 if it worked, or -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= (sizeof(*n) * 8))
        return (-1);

    *n &= ~(1ul << index);
    return (1);
}

