#include "main.h"
/**
 * array_range - creates array from min to max
 * @min: start
 * @max: end
 * Return: pointer to first postion
 */

int *array_range(int min, int max)
{
	int i, len;
	int *res;

	if (min > max)
		return (NULL);

	len = max - min;

	res = malloc(sizeof(*res) * len);

	for (i = 0; i <= len && min <= max; i++)
		res[i] = min++;

	return (res);
}
