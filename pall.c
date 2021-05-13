#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - set the bit on 0 to index
 *@n: the number
 *@index: the index
 *Return: reyturn 0
 *stack_t **stack, unsigned int line
 */
void _pall(stack_t **stack, unsigned int len)
{
  stack_t *temp = '\0';
  (void)len;
  temp = *stack;
  while(temp != '\0')
    {
      printf("%d\n", temp->n);
      temp = temp->next;
    }
}

void _push(stack_t **head, unsigned int line)
{
  add_dnodeint(&(*head), line);
}
void _pint(stack_t **stack, unsigned int line)
{
  (void)line;
  printf("%d\n", (*stack)->n);
}
stack_t *add_dnodeint(stack_t **head, const int n)
{
  stack_t *new;
  new = malloc(sizeof(stack_t));
  if (new == '\0')
    return ('\0');
  new->n = n;
  new->prev = NULL;
  new->next = *head;
  if (*head)
    (*head)->prev = new;
  *head = new;
  return (new);
}
/**
 * add_dnodeint_end - add news nodes to the end of list
 * @head: head of the list
 * @n: the number
 * Return: NULL.
 */
stack_t *add_dnodeint_end(stack_t **head, int n)
{
  stack_t *new;
  new = malloc(sizeof(stack_t));
  if (new == '\0')
    return ('\0');
  new->prev = NULL;
  new->n = n;
  new->next = NULL;
  if (*head != NULL)
    {
      stack_t *end = *head;
      while (end->next != '\0')
	end = end->next;
      end->next = new;
      new->prev = end;
    }
  else
    *head = new;
  return (new);
}
