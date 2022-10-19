#include "main.h"
/**
 * main - print times_tables
 * @n: declaring integers
 */
void print_times_table(int n)
{
int n, mult, prod;
for (n = 0; n <= 100; n++)
{
_putchar('0');
for (mult = 1; mult <= 100; mult++)
{
_putchar(',');
_putchar(' ');
prod = n * mult;
if (prod <= 100)
putchar (' ');
else
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
