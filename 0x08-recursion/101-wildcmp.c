#include "main.h"

/**
 * wildcmp - two strings in comparison
 * @str2: comp string
 * @str1: given string
 *
 * Return: same
 */

int wildcmp(char *str1, char *str2)
{
	if (*str1 == '\0' && str2 == '\0')
	{
		return (1);
	}
	if (*str1 == *str2)
	{
		return (wildcmp(str1 + 1, str2 + 1));
	}
	if (*str2 == '*' && *(str2 + 1) != '\0' && *str1 == '\0')
	{
		return (0);
	}
	if (*str2 == '*')
	{
		return (wildcmp(str1, str2 + 1) || wildcmp(str1 + 1str2));
	}
	return (0);
}
