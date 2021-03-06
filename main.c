#include <string.h>
#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - main
 *@argv: argv
 *@argc: argc
 *Return: reyturn 0
 */
int main(int argc, char *argv[])
{
FILE *file;
char *buff = NULL;
size_t lon;
char *point = '\0';
unsigned int line = 0;
stack_t *stack = NULL;
void (*var_name)(stack_t **stack, unsigned int line_number) = NULL;
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
if (!file)
{
fprintf(stderr, "Error: Can't open file file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (getline(&buff, &lon, file) != -1)
{
buff[strlen(buff) - 1] = '\0';
line++;
point = strtok(buff, "\n\t ");
if (point && point[0] != '#')
{
var_name = get(point, line);
var_name(&stack, line);
}
}
fclose(file);
free_s(stack);
free(buff);
exit(EXIT_SUCCESS);
}
/**
 * free_s - free the stack
 *@stack: the stack
 *Return: reyturn 0
 */
void free_s(stack_t *stack)
{
if (stack)
{
free_s(stack->next);
free(stack);
}
}
