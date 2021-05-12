#include <string.h>
#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * get_op_func - search the sign
 *@s: the sign
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
      fprintf(stderr, "Error: Can't open file <file>\n");
      exit(EXIT_FAILURE);
    }
  while(getline(&buff, &lon, file) != EOF)
    {
      buff[strlen(buff) - 1] = '\0';
      line++;
      point = strtok(buff, "\n\t ");
      var_name = get(point, line);
      var_name(&stack, line);
    }
  free(buff);
  fclose(file);
  exit(EXIT_SUCCESS);
}
void hola(stack_t *stack)
{
  if (stack)
    {
      hola(stack->next);
      free(stack);
    }
}
