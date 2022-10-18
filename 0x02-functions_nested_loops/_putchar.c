#include "main.h"
#include "unistd.h"

/**
 * _putchar - writes rhe character c to stdout
 * @c: the charactercto print
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
