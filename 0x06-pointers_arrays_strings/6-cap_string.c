#include "main.h"

/**
 * cap_string - capitalizing the first
 * character of a word
 * @ch: set of word
 *
 * capitalization
 * Return: result
 */

char *cap_string(char *ch)
{
	int e, last;

	for (e = 0; ch[e] != '\0'; e++)
	{
		last = e - 1;
		if (ch[e] >= '97' && ch[e] <= '122')
		{
			if (e == 0)
			{
				ch[e] -= 32;
			}
			else if (ch[last] == '\n' || ch[last] == ',')
			{
				ch[e] -= 32;
			}
			else if (ch[last] == '!' || ch[last] == '?')
			{
				ch[e] -= 32;
			}
			else if (ch[last] == ' ' || ch[last] == '\t')
			{
				ch[e] -= 32;
			}
			else if (ch[last] == '"' || ch[last] == '(')
			{
				ch[e] -= 32;
			}
			else if (ch[last] == ';' || ch[last] == '.')
			{
				ch[e] -= 32;
			}
			else if (ch[last] == ')' || ch[last] == '{')
			{
				ch[e] -= 32;
			}
		}
	}

	return (ch);
}
