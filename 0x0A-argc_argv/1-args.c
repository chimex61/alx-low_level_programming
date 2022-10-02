#include <stdio.h>
#include "main.h"

/**
* main - prints the number of arguments passed into it.
* @argc: The number of command line arguments
* @argv: An array containing the program command line arguments
*
* Always return (0)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
