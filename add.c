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
void _add(stack_t **stack, unsigned int len)
{
  int sum, num;
  num = _len(*stack);
  if (num >= 2)
    {
      sum = (*stack)->n;
      sum += (*stack)->next->n;
      _pop(stack, len);
      (*stack)->n = sum;
    }
}
void _nop(stack_t **stack, unsigned int len)
{
  (void)stack;
  (void)len;
}
