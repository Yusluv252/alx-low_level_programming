#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: character to print
 *
 * Return: on success 1
 * on eeror, -1 is returned, and ernno is set appropriately .
 */
int_putchat (char c)
{

	return (write(1, &c, 1));
}