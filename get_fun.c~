#include "monty.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
stack_t *get_func(stack_t **head, char *n)
{
  stack_t *new;
  new = malloc(sizeof(stack_t));
  if (!new)
    {
      dprintf(2, "Error: malloc failed\n");
      free(new);
      exit(EXIT_FAILURE);
    }
  new->n = atoi(n);
  new->prev = NULL;
  if (!(*head))
    new->next = NULL;
  else
    {
    new->next = *head;
    (*head)->prev = new;
    }
  *head = new;
  return(new);
}
