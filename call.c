#include "monty.h"
#include <stdlib.h>
/**
 * clear_bit - set the bit on 0 to index
 *@n: the number
 *@index: the index
 *Return: reyturn 0
 */
void (*get(char *opcode))(stack_t **, unsigned int)
{
  int i;
  instruction_t ops[] = {
    {"pall", _pall},
    {NULL, NULL}
  };
  for (i = 0; ops[i].opcode != '\0'; i++)
    {
      if (*opcode == *ops[i].opcode)
	return(ops[i].f);
    }
  return ('\0');
}
