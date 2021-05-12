#include "monty.h"
#include <string.h>
#include <stdlib.h>
/**
 * clear_bit - set the bit on 0 to index
 *@n: the number
 *@index: the index
 *Return: reyturn 0
 */
void (*get(char *opcode, unsigned int len))(stack_t **stack, unsigned int line_number)
{
  int i;
  instruction_t ops[] = {
    {"pall", _pall},
    {"push", _push},
    {"pint", _pint}, 
    {NULL, NULL}
  }; 
  (void)len;
  for (i = 0; ops[i].opcode != NULL; i++)
    {
      if (!strcmp(ops[i].opcode, opcode))
	return(ops[i].f);
    }
  return(NULL);
}
