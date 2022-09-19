#include "main.h"

/**
* _strlen - return the length of a string
* @str: the string to be processed
* Return: the length of the string
*/

int  _strlen(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
