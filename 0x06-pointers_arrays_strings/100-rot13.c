#include "main.h"
/**
 * rot13 - rotate character 13 places in the alphabet
 * @s: string
 * Return: string rotated
 */
char *rot13(char *s)
{
int x, y;
char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; input[y] != '\0'; y++)
{
if (s[x] == input[y])
{
s[x] = output[y];
break;
}
}
}
return (s);
}
