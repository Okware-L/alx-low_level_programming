#include <stdio.h>
/**
*main - print the size of computer types
*Return: 0
*/
int main(void)
{
printf("size of a char: %c byte(s)\n", sizeof(char));
printf("size of an int: %i byte(s)\n", sizeof(int));
printf("size of a long int: %ld byte(s)\n", sizeof(long int));
printf("size of a long long int: %lld byte(s)\n", sizeof(long long));
printf("size of a char: %i byte(s)\n", sizeof(float));
}
