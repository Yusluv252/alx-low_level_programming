#include <stdio.h>

/** Main - main focus
 *
 * Return: Always zero
 */

int main() 

	{
	char letter = 'a';

	while (letter <= 'z') {
	if (letter != 'e' && letter != 'q') {
		putchar(letter);
	}
	letter++;	
	}

	putchar('\n');
	return 0;
}
