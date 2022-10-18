#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
char (* sh = "stdio");
while (* sh)
{
putchar (* sh);
(sh++);
}
putchar('\n');
return (0);
}
