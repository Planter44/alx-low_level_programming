#include "main.h"

/**
* _strspn -Getting the length of prefix substring.
* @s: A character.
* @accept: String.
* Return: Returns the number of bytes.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (l);
	}
	return (l);
}
