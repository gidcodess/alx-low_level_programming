#include "main.h"

/**
 * set_bit - sets the value of a bit at given index to 1
 * @n: a pointer to an unsigned long int
 * @index: the index of the bit to set, starting from 0
 *
 * Return: 1 if itt worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
