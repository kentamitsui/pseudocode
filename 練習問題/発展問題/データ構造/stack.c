#include <stdio.h>

#define CAPACITY 8

void print_pile(char pile[], int top) {
  printf("pile: [");
  for (int i = 0; i < top; i++) {
    printf("'%c'", pile[i]);
    if (i < top - 1) {
      printf(", ");
    }
  }
  printf("]\n");
}

void push(char c, char pile[], int *top, int capacity) {
  if (*top >= capacity) {
    printf("pileは満杯です");
    return;
  }

  pile[*top] = c;
  *top = *top + 1;

  print_pile(pile, *top);
}

void pop(char pile[], int *top) {
  if (*top == 0) {
    printf("pileが空になりました");
    return;
  }

  *top = *top - 1;
  printf("popしたメモリアドレスの値: %c\n", pile[*top]);
}

int main(void) {
  char pile[CAPACITY];
  int top = 0;

  push('A', pile, &top, CAPACITY);
  push('B', pile, &top, CAPACITY);
  push('C', pile, &top, CAPACITY);
  pop(pile, &top);
  pop(pile, &top);
  push('D', pile, &top, CAPACITY);
  pop(pile, &top);

  return 0;
}