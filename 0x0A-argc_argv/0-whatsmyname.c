#include "main.h"
#include <stdio.h>

/**
* This prints the programs name followed by a newline
* @argc: Number of command line argument
* @argv: Array containing the program CL argument
*
* Always return (0)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
