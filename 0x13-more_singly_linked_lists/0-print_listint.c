#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
	printf("print the element %d\n", h->n);
	h = h->next;
	nodes++;
}
return (nodes);
}
