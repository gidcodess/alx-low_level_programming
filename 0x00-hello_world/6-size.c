#include <stdio>

/**
 * main - Print the size of various types a based on
 * the computer it as compiled and run on..
 * Return: 0 (Success)
 */

int main(void)

{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of a int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)\n" sizeof(float));
	return (0);
}
