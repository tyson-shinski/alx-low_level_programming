#ifndef LISTS_H
#define LISTS_H

/* Define the structure for a singly-linked list of integers */
typedef struct listint_s
{
    int n;                    /* Data (an integer in this case) */
    struct listint_s *next;   /* Pointer to the next node in the list */
} listint_t;

/* Function prototype for printing a listint_t list */
size_t print_listint(const listint_t *h);

#endif /* LISTS_H */
