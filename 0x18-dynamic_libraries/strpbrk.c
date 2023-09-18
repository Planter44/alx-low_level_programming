#include "main.h"
/**
* _strpbrk -Checks for set of bytes.
* @s: A string.
* @accept: A string.
* Return: Pointer s.
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
