#include "main.h"

/**
* _strchr -Findss a character in string.
* @s: string.
* @c: char for s.
* Return: First incident, otherwise NULL.
**/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
