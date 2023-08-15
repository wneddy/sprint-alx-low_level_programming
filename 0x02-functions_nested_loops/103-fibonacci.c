#include <stdio.h>

/**
 * main - program to find and print
 * sum of even-valued
 *
 * Return: (terminate)
 */

int main(void)
{
	unsigned long ser1 = 0, ser2 = 1, ser_sum;
	float all_add;

	while (1)
	{
		ser_sum = ser1 + ser2;
		if (ser_sum > 4000000)
			break;

		if ((ser_sum % 2) == 0)
			all_add += ser_sum;

		ser1 = ser2;
		ser2 = ser_sum;
	}
	printf("%.0f\n", all_add);

	return (0);
}
