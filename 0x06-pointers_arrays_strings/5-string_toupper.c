#include "main.h"

/**
 * string_toupper - convertion a
 * string from lowercase to uppercase
 * @arr: set array
 * Return: arr final
 */

char *string_toupper(char *arr)
{
	int e = 0;

	while (arr[e] != '\0')
	{
		if (arr[e] >= 97 && arr[e] <= 122)
		{
			arr[e] -= 32;
		}
		e++;
	}

	return (arr);
}
