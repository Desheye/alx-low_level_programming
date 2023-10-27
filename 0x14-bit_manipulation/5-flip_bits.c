/**
 * flip_bits - Counts the number of bits needed to flip to make n equal to m.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of flipped bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor_result = n ^ m;
    unsigned int flips = 0;

    while (xor_result > 0) {
        flips += xor_result & 1;
        xor_result >>= 1;
    }

    return flips;
}

