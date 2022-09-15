#include <stdio.h>
#include "main.h"

/**
* _isupper - check whether a character is uppercase or not
*
* @c: character to be checked
*
* Return 1 if it is upper case, otherwise 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
