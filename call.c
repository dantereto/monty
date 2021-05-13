#include "monty.h"
#include <string.h>
#include <stdlib.h>
/**
 * get - get a funtion
 *@opcode: the opcode
 *@len: the line
 *Return: reyturn 0
 */
void (*get(char *opcode, unsigned int len))(stack_t **s, unsigned int l)
{
int i;
instruction_t ops[] = {
{"pall", _pall},
{"push", _push},
{"pint", _pint},
{"pop", _pop},
{"swap", _swap},
{"add", _add},
{"nop", _nop},
{NULL, NULL}
};
(void)len;
for (i = 0; ops[i].opcode != NULL; i++)
{
if (!strcmp(ops[i].opcode, opcode))
return (ops[i].f);
}
if (ops[i].opcode == '\0')
{
fprintf(stderr, "L%d: unknown instruction <opcode>\n", len);
exit(EXIT_FAILURE);
}
}
