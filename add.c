#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _add - add element of the stack
 *@stack: the stack
 *@line: the line of error
 *Return: reyturn 0
 *stack_t **stack, unsigned int line
 */
void _add(stack_t **stack, unsigned int line)
{
int sum = 0, num = 0;
num = _len(*stack);
if (stack == NULL || *stack == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line);
exit(EXIT_FAILURE);
}
if (num >= 2)
{
sum = (*stack)->n;
sum += (*stack)->next->n;
_pop(stack, line);
(*stack)->n = sum;
}
else
{
fprintf(stderr, "L%d: can't add, stack too short\n", line);
exit(EXIT_FAILURE);
}
}
/**
 * _nop - nop
 *@stack: the stack
 *@line: the line of error
 *Return: reyturn 0
 */
void _nop(stack_t **stack, unsigned int line)
{
(void)stack;
(void)line;
}
/**
 * _sub - sub element of the stack
 *@stack: the stack
 *@line: the line of error
 *Return: reyturn 0
 *stack_t **stack, unsigned int line
 */
void _sub(stack_t **stack, unsigned int line)
{
int sub = 0, num;
num = _len(*stack);
if (stack == NULL || *stack == NULL)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line);
exit(EXIT_FAILURE);
}
if (num >= 2)
{
sub = (*stack)->n;
_pop(stack, line);
(*stack)->n -= sub;
}
else
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line);
exit(EXIT_FAILURE);
}
}
/**
 * _div - div element of the stack
 *@stack: the stack
 *@line: the line of error
 *Return: reyturn 0
 *stack_t **stack, unsigned int line
 */
void _div(stack_t **stack, unsigned int line)
{
int div = 0, num;
num = _len(*stack);
if (stack == NULL || *stack == NULL)
{
fprintf(stderr, "L%d: can't div, stack too short\n", line);
exit(EXIT_FAILURE);
}
if (num >= 2)
{
div = (*stack)->n;
_pop(stack, line);
if (div == 0)
{
fprintf(stderr, "L%d: division by zero\n", line);
exit(EXIT_FAILURE);
}
(*stack)->n /= div;
}
else
{
fprintf(stderr, "L%d: can't div, stack too short\n", line);
exit(EXIT_FAILURE);
}
}
