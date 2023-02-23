#include <unistd.h>
/**
 *_putchar - that will be used to write char @c to stdout
 * @c: is the character to print
 * Return: 1 means success
 * On error -1 will be returned and an error will be occured
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}

