#include <stdio.h>

/**
 * main - my main function
 *
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %lu  byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byre(s)", sizeof(float));
	return (0);
}
