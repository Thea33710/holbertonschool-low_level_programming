#include <stdio.h>
#include <stdlib.h>

/**
 * main_function_start - Entry point
 *
 * Return: Always 0 (Success)
 */

void main_function_start(void)
{

}

/**
 * main - Entry point
 *
 * @argc: count arguments
 * @argv: array of pointer
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *ptr = (unsigned char *) &main_function_start;

	for (i = 0; i < number_of_bytes; i++)
	{
	printf("%02x", ptr[i]);

	if (i < (number_of_bytes - 1))
	{
		printf(" ");
	}
	}

	printf("\n");
	return (0);
}
