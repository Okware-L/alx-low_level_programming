#include "main.h"
/**
 * *_strcat - concantenates two strings
 *@dest: destination
 *@src: from
 *Return: char
 */
char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
		;

	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	retur;
}
