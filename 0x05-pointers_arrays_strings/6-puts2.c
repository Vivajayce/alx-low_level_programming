#include "main.h"
/**
 * puts2 - prints one charcter out of 2 of a string
 * @str: string
 */
void puts2(char *str)
{
int i = 0;
for (str[i] != '\0'; i++)
{
if ((i % 2) == 0)
_putchar(str[i]);
else
continue;
}
_putchar('\n');
}
