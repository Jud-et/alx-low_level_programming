#include "main.h"
#include <stdio.h>

/**
 * putchar - writes the character c to stdout
 * @c: The character to print 
 *
 * Return: on sucess 1
 * on erro return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
