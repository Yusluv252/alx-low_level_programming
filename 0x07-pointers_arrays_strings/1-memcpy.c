#include "main.h"

/**
 * _memcpy - function copies an bytes from memory area src
 * @n: fuction copies
 * @src: bytes from memoryarea
 *
 * @dest: to memory area
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
