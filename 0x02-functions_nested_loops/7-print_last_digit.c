#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int jo = n % 10;
if (jo < 0)
jo *= -1;
_putchar(jo + '0');
return (0);
}
