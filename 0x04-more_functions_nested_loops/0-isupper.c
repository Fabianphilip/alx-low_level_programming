#include "main.h"

/**
 * _isupper - checks is a character is uppercase
 * @b: carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int b)
{
	if (b >= 65 && b <= 90)
	{
		return (1);
	}
	return (0);
}
