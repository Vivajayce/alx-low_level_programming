#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: character array to copy into
 * @src: charcter array to copy from
 * @n: number of elements to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *lo;
lo = dest;
while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
return (lo);
}
