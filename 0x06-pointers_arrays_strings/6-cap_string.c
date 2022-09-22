#include "main.h"
/**
*cap_string - capitalizes all words of a string
*@s: sting to capitalize
*Return: s
*/
char *cap_string(char *s)
{
	int i = 0, j;
	char sep[] = ",\t;\n; .!?\"(){}";

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z' && i == 0)
			s[i] -= 'a' - 'A';

		else
		{
			for (j = 0; j <= 12; j++)
			{
				if (sep[j] == (s[i] - 1))
					s[i] -= 'a' - 'A';
			}
		}
		i++;
	}
	_putchar('\n');
	return (s);
}
