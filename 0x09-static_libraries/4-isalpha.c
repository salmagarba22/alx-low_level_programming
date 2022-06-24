#include "main.h"

/**
*_isalpha - checks for alphabets
*Return: 1 if c is a letter, lowercase or uppercase
* 0 otherwise
* @c: is a character
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
