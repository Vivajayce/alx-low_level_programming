#include "main.h"
/**
 * _strchr - locate character in a string
 * @s: character array string
 * @c: charcter to look for
 * Return: NULL if charcter not found, or pointer to first occurence of charcter c
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
else if (*(s + 1) == c)
s++;
}
return (s + 1);
}
