#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

bool binary_search(const int array[], int target, int arrLen) {
  int low = 0;
  int high = arrLen - 1;
  int mid = 0;

  while (low <= high) {
    mid = (low + high) / 2;
    if (target == array[mid]) {
      return true;
    } else if (target > array[mid]) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return false;
}

void fill_random(int arr[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    arr[i] = 5 + rand() % (100 - 5 + 1);
  }
}

int random_target(void) { return rand() % 101; }

int compare_int(const void *a, const void *b) {
  return (*(const int *)a - *(const int *)b);
}

int main(void) {
  int searchArr[N];
  int target;
  int length = N;

  srand((unsigned)time(NULL));

  fill_random(searchArr, N);
  target = random_target();
  qsort(searchArr, length, sizeof(int), compare_int);

  printf("target: %d\n", target);
  printf("searchArr: ");
  for (int i = 0; i < length; i++) {
    printf("%d ", searchArr[i]);
  }
  printf("\n");
  printf("%s\n", binary_search(searchArr, target, length) ? "true" : "false");

  return 0;
}