#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of itself
 * @argc: the number of arguements supplied to the program
 * @argv: array of pointers to the arguements
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
