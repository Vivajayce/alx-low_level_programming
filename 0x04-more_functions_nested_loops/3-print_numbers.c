#include "main.h"
/**
 * print_numbers - print the numbers from 0 to 9
 * Description: You can only use _putchar twice
 * Return: 0 always
 */
void print_numbers(void)
{
int i = 0;
while (i < 10)
{
_putchar(i++ + '0')
}
_putchar('\n');
}
