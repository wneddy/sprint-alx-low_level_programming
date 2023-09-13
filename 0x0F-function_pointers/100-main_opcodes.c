#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing the opcodes of its
 * own main function
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int p, val;
	void *pnt;
	char *pnt_val;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	val = atoi(argv[1]);
	if (val < 0)
	{
		printf("Error\n");
		exit(2);
	}

	pnt = main;
	pnt_val = pnt;
	count = 0;
	while (p < val)
	{
		printf("%02hhx", pnt_val[pnt]);
		if (p < val - 1)
			printf(" ");
		else
			printf("\n");
		p++;
	}
	return (0);
}
