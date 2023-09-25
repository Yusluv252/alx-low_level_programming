#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: the string to search
 * @accept: the set of bytes to be searched
 *
 * Return: if a set is matched a pointer to the matched bytes and NULL if not
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
