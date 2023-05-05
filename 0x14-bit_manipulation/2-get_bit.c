#include "main.h"

/**
 * get_bit - Return the value of a bit at given index
 * @n: The number containing the bit to get.
 * @index: The index, starting from 0 of the bit to get.
 *
 * Return: The value of the bitat index or -1 if an error occur
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
