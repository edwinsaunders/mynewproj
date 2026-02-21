#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */

int contents[STACK_SIZE];
int top = 0;

void make_empty(void) {
  top = 0;
}

bool is_empty(void) {
  return top == 0;
}

bool is_full(void) {
  return top == STACK_SIZE;
}

void push(int i) {
  if (is_full())
    puts("stack_overflow()");
  else
    contents[top++] = i;
}

int pop(void) {
  if (is_empty())
    puts("stack_underflow()");
  else
    return contents[--top];
}

int main(int argc, char *argv[])
{
  push(5);
  push(3);
  printf("%d\n", pop());

  puts("This function doesn't need newline.");
  return EXIT_SUCCESS;
}
