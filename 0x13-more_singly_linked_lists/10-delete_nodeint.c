#include "lists.h"

/**
 * delete_nodeint_at_index - will delete a node in a linked list at a...
 * @head: pointer to the 1st particular element in the list
 * @index: index of the node to be delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (i < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
i++;
}


current = temp->next;
temp->next = current->next;
free(current);

return (1);
}
