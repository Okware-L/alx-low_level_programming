#include "main.h"
/**
 *swap_int - swaps value of two int
 *@a : input
 *@b : input
 *Return : int
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
