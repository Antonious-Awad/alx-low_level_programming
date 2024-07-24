#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all data types
 * @format: format of data
 */

void print_all(const char *const format, ...)
{
	unsigned int count;
	char *s;
	va_list inputPtr;

	va_start(inputPtr, format);

	count = 0;

	while (format && format[count])
	{
		switch (format[count])
		{
		case 'c':
			printf("%c", va_arg(inputPtr, int));
			break;
		case 'i':
			printf("%d", va_arg(inputPtr, int));
			break;
		case 'f':
			printf("%f", va_arg(inputPtr, double));
			break;
		case 's':
			s = va_arg(inputPtr, char *);
			if (!s)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			count++;
			continue;
		}
		if (format[count] != '\0')
			printf(", ");
		count++;
	}
	va_end(inputPtr);
	printf("\n");
}
