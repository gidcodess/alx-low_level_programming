#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: If big-endian - 0.
 * if little-endian - 1.
 */

int get_endianness(void)
{

	u_int16_t n = 1;
	u_int8_t *p = (u_int8_t *)&n;

	if (*p == 1)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
