#include "main.h"

/**
 * _isalpha -Checks for an alphabetic character.
 * @c: Character to be checked.
 * Return: 1 if c is letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
