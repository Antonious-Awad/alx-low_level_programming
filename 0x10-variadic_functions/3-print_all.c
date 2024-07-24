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
	va_list inputPtr;

	va_start(inputPtr, format);

	count = 0;

	while (format && format[count])
	{
		switch (format[count])
		{
		case 'c':
			printf("%c", va_arg(inputPtr, char));
			break;
		case 'i':
			printf("%d", va_arg(inputPtr, int));
			break;
		case 'f':
			printf("%f", va_arg(inputPtr, float));
			break;
		case 's':
			printf("%s", va_arg(inputPtr, char *));
			break;
		}
		if (format[count + 1] == '\0')
			printf("\n");
		else
			printf(", ");
		count++;
	}
	va_end(inputPtr);
}
