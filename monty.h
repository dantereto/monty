#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
  int n;
  struct stack_s *prev;
  struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
  char *opcode;
  void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
typedef struct glob_s
{
  char *buff;
  char *n;
  FILE *file;
} glob_t;
extern glob_t glob;
void _pall(stack_t **stack, unsigned int len);
void (*get(char *opcode, unsigned int len))(stack_t **stack, unsigned int line_number);
void _push(stack_t **head, unsigned int line);
stack_t *add_dnodeint(stack_t **head, char n);
stack_t *add_dnodeint_end(stack_t **head, int n);
stack_t *get_func(stack_t **head, char *n);
void hola(stack_t *stack);
void _pint(stack_t **stack, unsigned int line);
