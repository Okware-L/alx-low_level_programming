#include <stdio.h>
/**
*main - print the size of computer types
*Return: 0
*/
int main(void)
{
printf("Size of a char; %c byte(s)\n",(unsigned long) sizeof(char));
printf("Size of an int; %i byte(s)\n",(unsigned long) sizeof(int));
printf("Size of a long long int; %lld byte(s)\n",(unsigned long) sizeof(long long int));
printf("Size of a long int; %ld byte(s)\n",(unsigned long) sizeof(long int));
printf("Size of a float; %f byte(s)\n",(unsigned long) sizeof(float));
return (0);
}
