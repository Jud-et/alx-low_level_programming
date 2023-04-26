#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: which to check bit
 *
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int j, unsigned int index)
{
unsigned long int div, res;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
div = 1 << index;
res = j & div;
if (res == div)
return (1);

return (0);
}
