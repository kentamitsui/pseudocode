#include <stdio.h>

int search_targetValue(const int array[], int result, int len) {
  for (int i = 1; i < len; i++) {
    if (array[i] >= result) {
      result = array[i];
    }
  }
  return result;
}

int main(void) {
  int searchList[] = {3, 4, 9, 5, 13, -1, 0, 7};
  int result = searchList[0];
  int length = sizeof(searchList) / sizeof(searchList[0]);

  printf("%d\n", search_targetValue(searchList, result, length));

  return 0;
}