#ifndef LISTS_H
#define LIST_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
