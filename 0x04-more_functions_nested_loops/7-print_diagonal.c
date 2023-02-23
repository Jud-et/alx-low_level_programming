#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - entry point
 * @n: parameter (number of diagonals)
 */

void print_diagonal(int n)
{
	int row, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= n; row++)
		{
			for (i = 1; i < row; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
