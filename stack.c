/* File: stack.c */
#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty() {
  top = 0;
}

bool is_empty() {
  return top == 0;
}

bool is_full() {
  return top == STACK_SIZE;
}

void push(int i) {
  if (is_full())
    stack_overflow();
  else
    contents[top++] = i;
}

int pop() {
  if (is_empty())
    stack_underflow();
  else
    return contents[--top];
}

void stack_overflow() {
  printf("Error: stack overflow!\n");
  exit(EXIT_FAILURE);
}

void stack_underflow() {
  printf("Error: stack underflow!\n");
  exit(EXIT_FAILURE);
}