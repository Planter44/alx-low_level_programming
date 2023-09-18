#include "main.h"

/**
* _isupper - Return 1 for uppercase, otherwise 0.
* @c: character.
* Return: 0 for uppercase and 1 for lowercase.
**/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
