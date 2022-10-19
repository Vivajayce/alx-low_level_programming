#include "main.h"
/**
 *print - 100-times_tables
 *@num: declaring integers
 */
void print_times_table(int num)
{
int num, mult, prod;
for (num = 0; num <= 100; num++)
{
_putchar('0');
for (mult = 1; mult <= 100; mult++)
{
_putchar(',');
_putchar(' ');
prod = num * mult;
if (prod <= 100)
putchar (' ');
else
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
