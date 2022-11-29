#include "lists.h"
#include <unistd.h>
/**
 * _putchar - writes the charcter c to stdout
 * @c: the charcter to print
 * Return: on success 1
 */
int _putchar (char c)
{
return (write(1, &c, 1));
}
