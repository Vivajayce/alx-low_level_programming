#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets ten times
 */
void print_alphabet_x10(void)
{
int ten;
char c;
for (ten = 1; ten <= 10; ten++)
{
for (c = '10'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
