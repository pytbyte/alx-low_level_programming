#include "main.h"

/**
 * 0-binary_to_uint.c  - converts binary to an unsigned int
 * @b: pointing to a string  of 0 and 1
 * 
 * Return: converted number or 0
 * 
*/

unsigned int binary_to_uint(const char *b)
{
    unsigned int unit_storage = 0;

    if (b == NULL)
        return (0);

    for (; *b != '\0'; b++) {
        if (*b != '0' && *b != '1')
            return (0);
        unit_storage <<= 1;
        if (*b == '1')
            unit_storage += 1;
    }
    return (unit_storage);
}

