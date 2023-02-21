#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, Starting with 0
 * Return: empty output
 */

void times_table(void)

{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	product = i * j;

	if (j == 0)
	{
	printf("%d", product);
	}
	else if (product <= 9)
	{
	printf(", %d", product);
	}
	else
	{
	printf(", %d", product);
	}
	}
	printf("\n");
	}
}
