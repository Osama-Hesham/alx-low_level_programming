#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - print all
 * @format: input
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			if (format[i] == 'i')
			{
				printf("%s%d", s, va_arg(list, int));
			}
			else if (format[i] == 'c')
			{
				printf("%s%c", s, va_arg(list, int));
			}
			else if (format[i] == 'f')
			{
				printf("%s%f", s, va_arg(list, double));
			}
			else if (format[i] == 's')
			{
				char* str = va_arg(list, char*);
				if (!str)
				{
					str = "(nil)";
				}
				printf("%s%s", s, str);
			}
			else
			{
				i++;
				continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
