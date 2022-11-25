#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
char *dup;
int len;
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
dup = strdup(str);
if (dup == NULL)
{
free(new);
return (NULL);
}
for (len = 0; str[len];)
len++;
new->str = dup;
new->len = len;
new->next = *head;
*head = new;
return (new);
}
