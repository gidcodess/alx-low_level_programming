#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a[5] = {98, 102, 402, 1024, 4096};
	int *p;

	p = &a[2];

	/*write your code here */
	printf("a[2] = %d\n", *(p));

	return (0);
}
