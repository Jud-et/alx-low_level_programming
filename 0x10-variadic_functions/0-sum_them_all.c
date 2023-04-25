#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all.
 * @n: given number.
 * Return: the sum.
 */
int sum_them_all(const unsigned int j, ...)
{
unsigned int i, sum = 0;
va_list arguments;

va_start(arguments, j);

for (i = 0; i < j; i++)
sum = sum + va_arg(arguments, int);

va_end(arguments);
return (sum);
}
