#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: an integer
 * On success: 1
 * On error: -1 and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

