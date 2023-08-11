#include <stdio.h>
/**
 * main - Printing varios computer sizes
 * Return: 0 (done)
 */
int main(void)
{
	int size1;
	char size2;
	float size3;
	long int size4;
	short size5;
	long long int size6;

printf("Size of int: %d byte(s)\n", sizeof(size1));
printf("Size of char: %d byte(s)\n", sizeof(size2));
printf("Size of float: %d byte(s)\n", sizeof(size3));
printf("Size of long int: %d byte(s)\n", sizeof(size4));
printf("Size of short: %d byte(s)\n", sizeof(size5));
printf("Size of long long int: %d byte(s)\n", sizeof(size6));
return (0);
}
