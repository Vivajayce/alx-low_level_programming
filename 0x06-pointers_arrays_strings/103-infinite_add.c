#include "main.h"
/**
 * infinite_add - add the number stored in two strings
 * @n1: contains strings to be added first
 * @n2: contains strings to be added second
 * @r: buffer to store the result
 * @r_index: the current index of the buffer
 * @size_r: size of the buffer
 * Return: if r can store the sum - a pointer to the result else 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int index, n1_len = 0, n2_len = 0;
for (index = 0; *(n1 + index); index++)
n1_len++;
for (index = 0; *(n2 + index); index++)
n2_len++;
if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
return (0);
n1 += n1_len - 1;
n2 += n2_len - 1;
*(r + size_r) = '\0';
return (add_strings(n1, n2, r, --size_r));
}

