#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints digits fro, 0 - 9
 * Description: prints numbers
 * Return: 0 on success
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
