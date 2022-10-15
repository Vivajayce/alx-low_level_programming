#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
char i;
char j;
for (i = 'a'; i <= 'Z'; i++)
{
putchar(i);
}
for (j = 'A'; j <= 'Z'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
