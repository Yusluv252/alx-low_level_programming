#include "main.h"

/**
 * _memset - fills a memory with a constanr byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy
 *
 * Return: pointers to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
