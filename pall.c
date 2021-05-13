#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _pall - print the values of the stack
 *@stack: the stack
 *@line: the line
 *Return: reyturn 0
 *stack_t **stack, unsigned int line
 */
void _pall(stack_t **stack, unsigned int line)
{
stack_t *temp = '\0';
(void)line;
temp = *stack;
while (temp != '\0')
{
printf("%d\n", temp->n);
temp = temp->next;
}
}
/**
 * _pint - print the values of the top of the stack
 *@stack: the stack
 *@line: the line of error
 *Return: reyturn 0
 *stack_t **stack, unsigned int line
 */
void _pint(stack_t **stack, unsigned int line)
{
if (stack == NULL || *stack == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
/**
 * _push - add node to the stack
 *@stack: the stack
 *@line: the line of error
 *Return: reyturn 0
 *stack_t **stack, unsigned int line
 */
void _push(stack_t **stack, unsigned int line)
{
stack_t *new;
char *element = strtok(NULL, "\n\t ");
if (element == NULL)
{
fprintf(stderr, "L%d: usage: push integer\n", line);
exit(EXIT_FAILURE);
}
new = malloc(sizeof(stack_t));
if (new == '\0')
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
new->n = atoi(element);
new->prev = NULL;
if (*stack)
{
new->next = *stack;
(*stack)->prev = new;
*stack = new;
}
else
{
*stack = new;
new->next = NULL;
}
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
