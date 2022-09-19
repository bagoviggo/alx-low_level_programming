#include "main.h"
/**
*rev_string - a func that reverses a string
*@s: pointer to string
*/
void rev_string(char *s)
{
	int len, i, j;
	char temp;

	for (len = 0; s[len] != '\0'; len++)

	i = 0;
	j = len / 2;

	while (j--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
