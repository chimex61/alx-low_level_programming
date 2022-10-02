#include <stdio.h>
#include "main.h"

/**
* main - prints all arguments it receives.
* @argc: The number of command line arguments
* @argv: An array containing the program command line arguments
*
* Always return (0)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
