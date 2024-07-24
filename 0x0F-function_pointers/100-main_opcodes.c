#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument values
 * Return: 0 or exit code 1 or 2
 */

int main(int argc, char **argv)
{
	int bytes, i;

	unsigned char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = argv[1];

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcode = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", opcode[i]);
		if (i == bytes - 1)
		{
			printf("\n");
			break;
		}
		printf(" ");
	}
	return (0);
}
