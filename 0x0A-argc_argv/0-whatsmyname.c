#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);


	return (0);
}
