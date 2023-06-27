#include <unistd.h>

/**
 * _putchar - writes the character of c to stdout
 * @c: The character to print
 *
 * Return: On successs 1.
 * On error, -1 is returned as error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
