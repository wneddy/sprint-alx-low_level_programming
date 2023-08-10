
#include <stdio.h>
#include <unistd.h>

/**
 * main - output in standard error
 * Return: 1 (done)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korapar, 2015-10-19\n", 59);
return (1);
