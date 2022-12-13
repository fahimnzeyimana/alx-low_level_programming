#include "main.h"

/**
 * _isalpha - check if the given number character is lower case.
 * @c: character to test
 *
 * Return: 1 (true) else 0 (false)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
