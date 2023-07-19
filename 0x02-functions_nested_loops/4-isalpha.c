#include "main.h"

/**
 * _isalpha - check alpha
 * @c:alpabet
 * Return: 0 (success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
