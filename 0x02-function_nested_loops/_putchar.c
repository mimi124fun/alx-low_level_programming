#include "main.h"
#include <unistd.h>

/**
 * _putchar -writes the charactes c to stdoot
 * @c: the character to print
 * Return: on success
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
