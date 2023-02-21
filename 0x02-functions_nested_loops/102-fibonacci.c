#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci numbers
 * Return: Nothing!
 */

int main(void)

{
	int n1 = 1, n2 = 2, next, i;

	printf("%d, %d, ", n1, n2);

	for (i = 3; i <= 50; i++)
	{
	next = n1 + n2;
	printf("%d", next);
	n1 = n2;
	n2 = next;

	if (i != 50)
	{
	printf(", ");
	}
	}
	printf("\n");

	return 0;
}
