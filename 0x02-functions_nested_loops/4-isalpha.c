#include "main.h"

/**
 * _isalpha - draft
 * @c: draft
 *
 * Return: draft
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
