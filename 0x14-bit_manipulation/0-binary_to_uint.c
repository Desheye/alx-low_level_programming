#include "main.h"

unsigned int binary_to_uint(const char *binary)
{
    unsigned int decimal = 0;
    unsigned int weight = 1;

    if (binary == NULL)
        return 0;

    int len = 0;
    while (binary[len])
        len++;

    for (int i = len - 1; i >= 0; i--)
    {
        if (binary[i] != '0' && binary[i] != '1')
            return 0;

        if (binary[i] == '1')
            decimal += weight;

        weight *= 2;
    }

    return decimal;
}

