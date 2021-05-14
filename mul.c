#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _mul - mul element of the stack
 *@stack: the stack
 *@line: the line of error
 *Return: reyturn 0
 *stack_t **stack, unsigned int line
 */
void _mul(stack_t **stack, unsigned int line)
{
int mul = 0, num = 0;
num = _len(*stack);
if (stack == NULL || *stack == NULL)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line);
exit(EXIT_FAILURE);
}
if (num >= 2)
{
mul = (*stack)->n;
mul += (*stack)->next->n;
_pop(stack, line);
(*stack)->n = mul;
}
else
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line);
exit(EXIT_FAILURE);
}
}
