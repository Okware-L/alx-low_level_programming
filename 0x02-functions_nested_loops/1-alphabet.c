#include <stdio.h>
#include "main.h"
/**
 *main -  prints the alphabet, in lowercase, followed by a new line
 *Return: 0
 *
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
_putchar('\n');
}
