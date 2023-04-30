#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all parameters
 * @n: input
 * @...:input
 * Return: output
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int sum = 0;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
