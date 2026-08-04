#include <stdio.h>

int search_targetValue(const int array[], int result, int len) {
  for (int i = 1; i < len; i++) {
    if (array[i] >= result) {
      result = array[i];
    }
  }
  return result;
}

// 改善版
int find_max(const int array[], int len) {
  int max_value = array[0];
  for (int i = 1; i < len; i++) {
    if (array[i] > max_value) {
      max_value = array[i];
    }
  }
  return max_value;
}

int main(void) {
  int searchList[] = {3, 4, 9, 5, 13, -1, 0, 7};
  int result = searchList[0];
  int length = sizeof(searchList) / sizeof(searchList[0]);

  printf("%d\n", search_targetValue(searchList, result, length));
  printf("%d\n", find_max(searchList, length));

  return 0;
}