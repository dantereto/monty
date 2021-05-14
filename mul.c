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
_pop(stack, line);
(*stack)->n *= mul;
}
else
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line);
exit(EXIT_FAILURE);
}
}
/**
 * _mod - mod element of the stack
 *@stack: the stack
 *@line: the line of error
 *Return: reyturn 0
 *stack_t **stack, unsigned int line
 */
void _mod(stack_t **stack, unsigned int line)
{
int mod = 0, num;
num = _len(*stack);
if (stack == NULL || *stack == NULL)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", line);
exit(EXIT_FAILURE);
}
if (num >= 2)
{
mod = (*stack)->n;
_pop(stack, line);
if (mod == 0)
{
fprintf(stderr, "L%d: division by zero\n", line);
exit(EXIT_FAILURE);
}
(*stack)->n %= mod;
}
else
{
fprintf(stderr, "L%d: can't mod, stack too short\n", line);
exit(EXIT_FAILURE);
}
}
/**
 * _pchar - pchar
 *@stack: the stack
 *@line: the line of error
 *Return: reyturn 0
 *stack_t **stack, unsigned int line
 */
void _pchar(stack_t **stack, unsigned int line)
{
int cha = 0;
if (stack == NULL || *stack == NULL)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", line);
exit(EXIT_FAILURE);
}
cha = (*stack)->n;
if ((*stack)->n < 0 || (*stack)->n > 127)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
exit(EXIT_FAILURE);
}
else
{
printf("%c\n", cha);
}
}
