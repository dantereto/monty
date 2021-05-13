#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _pop - delete a node of the stack
 *@stack: the stack
 *@line: the line of error
 *Return: reyturn 0
 *stack_t **stack, unsigned int line
 */
void _pop(stack_t **stack, unsigned int line)
{
if (stack && *stack)
{
stack_t *tmp = '\0';
tmp = *stack;
*stack = tmp->next;
if (tmp->next)
tmp->next->prev = NULL;
free(tmp);
}
else
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line);
exit(EXIT_FAILURE);
}
}
/**
 * _swap - swap nodes
 *@stack: the stack
 *@line: the line of error
 *Return: reyturn 0
 */
void _swap(stack_t **stack, unsigned int line)
{
int data, number = 0;
(void)line;
if (*stack == NULL || stack == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line);
exit(EXIT_FAILURE);
}
number = _len(*stack);
if (number >= 2)
{
stack_t *tmp = (*stack)->next;
data = tmp->n;
tmp->n = (*stack)->n;
(*stack)->n = data;
}
else
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line);
exit(EXIT_FAILURE);
}
}
/**
 * _len - check the len of the stack
 *@stack: the stack
 *Return: reyturn 0
 */
size_t _len(stack_t *stack)
{
int n = 0;
stack_t *tmp = NULL;
tmp = stack;
if (stack)
{
while (tmp)
{
tmp = tmp->next;
n++;
}
return (n);
}
return ('\0');
}
