#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0;  // Initialize a count to keep track of the number of nodes

    while (h != NULL)
    {
        count++;          // Increment the count for each node
        h = h->next;      // Move to the next node
    }

    return count;  // Return the total count of nodes
}
