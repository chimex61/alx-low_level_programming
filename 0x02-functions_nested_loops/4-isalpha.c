#include "main.h"

/**
* checks for alphabet character
*
* Return: 1 if lower or uppercase, 0 if not alphabet character
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
