#include <stdbool.h>
#include <stdio.h>

bool list_search(const int items[], int length, int target) {
  for (int i = 0; i < length; i++) {
    if (items[i] == target) {
      return true;
      break;
    }
  }
  return false;
}

int main(void) {
  int target = 3;
  int checkItems1[] = {1, 2, 3, 4, 5};
  int checkItems2[] = {1, 2, 4, 5};

  int itemsLength1 = sizeof(checkItems1) / sizeof(checkItems1[0]);
  int itemsLength2 = sizeof(checkItems2) / sizeof(checkItems2[0]);

  printf("%s\n",
         list_search(checkItems1, itemsLength1, target) ? "true" : "false");
  printf("%s\n",
         list_search(checkItems2, itemsLength2, target) ? "true" : "false");
  return 0;
}