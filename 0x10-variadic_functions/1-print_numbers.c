#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all the given numbers.
 * @separator: define character to separate the numbers
 * @n: number of numbers to be printed.
 * Return: a string with numbers.
 */
void print_numbers(const char *separator, const unsigned int j, ...)
{
unsigned int i;
va_list arguments;

va_start(arguments, j);

for (i = 1; i <= j; i++)
{
printf("%i", va_arg(arguments, int));
if (i < j && separator)
printf("%s", separator);
else
{
;
}
}
printf("\n");
va_end(arguments);
}
