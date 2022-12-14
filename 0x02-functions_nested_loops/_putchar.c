#include <unistd.h>

/**
 * @C: The character to print
 * Return On success 1.
 * On error, return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
