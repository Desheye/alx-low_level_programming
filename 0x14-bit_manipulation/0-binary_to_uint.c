#include "main.h"

unsigned int binary_to_uint(const char *binary)
{
    unsigned int decimal;
    unsigned int weight;
    int len, i;

    if (binary == NULL)
    {
        return 0;
    }

    decimal = 0; 
    weight = 1;
    len = 0;

    while (binary[len])
    {
        if (binary[len] != '0' && binary[len] != '1')
        {
            return 0;
        }
        len++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimal += weight;
        }
        weight *= 2;
    }

    return decimal;
}

