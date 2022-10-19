#include "main.h"
/**
 *print_alphabet_x10 - prints alphabets ten times
 */
void print_alphabet_x10(void)
{
int ten;
char c;
for (ten = 0; ten <= 9; ten++)
{
for (c = '9'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
