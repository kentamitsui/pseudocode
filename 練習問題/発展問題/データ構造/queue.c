#include <stdio.h>
#define QUEUE_SIZE 5

int queue[QUEUE_SIZE];
int head = 0;
int tail = 0;
int size = 0;

void print_queue(void) {
  printf("queue: [");
  for (int i = 0; i < size; i++) {
    int index = (head + i) % QUEUE_SIZE;
    printf("%d", queue[index]);
    if (i < size - 1) {
      printf(", ");
    }
  }
  printf("]\n");
}

int enqueue(int value) {
  if (size >= QUEUE_SIZE) {
    printf("full of queue");
    return -1;
  }

  queue[tail] = value;
  tail = (tail + 1) % QUEUE_SIZE;
  size++;
  print_queue();

  return 0;
}

int dequeue(void) {
  if (size <= 0) {
    printf("empty of queue");
    return -1;
  }

  int value = queue[head];
  head = (head + 1) % QUEUE_SIZE;
  size--;
  print_queue();

  return value;
}

int main(void) {
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);
  enqueue(5);
  dequeue();
  dequeue();
  dequeue();
  enqueue(6);
  enqueue(7);
  printf("head: %d\n", queue[head]);
  return 0;
}

//
// queue: [0]
// queue: [0, 0]
// queue: [0, 0, 0]
// queue: [0, 0, 0, 0]
// queue: [0, 0, 0, 0, 0]
// queue: [0, 0, 0, 0]
// queue: [0, 0, 0]
// queue: [0, 0]
//