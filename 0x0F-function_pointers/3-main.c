#include "3-calc.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument values
 * Return: 0 or exit code 98
 */

int main(int argc, char **argv)
{
	int n1, n2, result;
	char sign;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]), n2 = atoi(argv[3]), sign = *argv[2];

	op = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	if ((sign == '/' || sign == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op(n1, n2);
	printf("%d\n", result);
	return (0);
}
