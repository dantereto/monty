#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * clear_bit - set the bit on 0 to index
 *@n: the number
 *@index: the index
 *Return: reyturn 0
 *stack_t **stack, unsigned int line
 */
void _pop(stack_t **stack, unsigned int len)
{
  (void)len;
  if (stack && stack)
    {
      stack_t *tmp = *stack;
      *stack = tmp->next;
      if (tmp->next)
	tmp->next->prev = NULL;
      free(tmp);
    }
  else
    {
      fprintf(stderr, "L%d: can't pop an empty stack", len);
      exit(EXIT_FAILURE);
    }
}
int delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
  stack_t *cont;
  unsigned int num;
  if (*head == '\0')
    return (-1);
  cont = *head;
  for (; num < index; num++)
    {
      if (cont == '\0')
	return (-1);
      cont = cont->next;
    }
  if (cont == *head)
    {
      *head = cont->next;
      if (*head != '\0')
	(*head)->prev = '\0';
    }
  else
    {
      cont->prev->next = cont->next;
      cont->next->prev = cont->prev;
    }
  free(cont);
  return (1);
}
void _swap(stack_t **stack, unsigned int len)
{
  int data, number = 0;
  (void)len;
  number = _len(*stack);
  if (number >= 2)
    {
      stack_t *tmp = (*stack)->next;
      data = tmp->n;
      tmp->n = (*stack)->n;
      (*stack)->n = data;
    }
}
size_t _len(stack_t *stack)
{
  int n = 0;
  stack_t *tmp = NULL;
  tmp = stack;
  if(stack)
    {
      while (tmp)
	{
	  tmp = tmp->next;
	  n++;
	}
      return(n);
    }
  return('\0');
}
