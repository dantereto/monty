#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - search the sign
 *@s: the sign
 *Return: reyturn 0
 */
int main(int argc, char *argv[])
{
  stack_t *point;
  unsigned int line = 0;
  int result;
  if (argc != 2)
    {
      printf("error");
    }
  result = (*get(argv[2]))(&point, line);
  printf("%d\n", result);
  return(0);
}
