#include <stdio.h>

/**
 * main - (a-z) but without q and e output
 *
 * rucusion of loop
 *
 * Return: 0 terminate loop
 */
int main(void)
{
	int ex_qe;

	for (ex_qe = 'a'; ex_qe <= 'z'; ex_qe++)
	{
		if (ex_qe == 'e' || ex_qe == 'q')
		{
			continue;
		}
		else
		{
			putchar(ex_qe);
		}
	}
	putchar('\n');
	return (0);
}
