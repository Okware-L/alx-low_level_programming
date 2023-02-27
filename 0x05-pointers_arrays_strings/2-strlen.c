#include "main.h"
/**
 *_strlen - find length of a string
 *
 *@s : input
 *Return: void
 */
int _strlen(char *s);
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
