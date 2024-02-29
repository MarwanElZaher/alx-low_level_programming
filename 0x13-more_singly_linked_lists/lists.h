#ifndef _LISTS_H_
#define _LISTS_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * struct listint_s - singly linked list
 * for creating nodes for a singly linked lists
 * @n: integer data type
 * @next: points to the next node of a list
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
