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
