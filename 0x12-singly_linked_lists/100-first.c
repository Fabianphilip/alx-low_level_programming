#include <stdio.h>

/**
 * first - Prints a string before the
 *        main function is executed.
 */
void first(void) __attribute__((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
