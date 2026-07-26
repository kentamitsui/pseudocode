# include <stdio.h>
# include <stdbool.h>

int main(void) {
  int target = 3;
  int checkItems1[] = {1,2,3,4,5};
  int checkItems2[] = {1,2,3,4};
  bool result = false;

  int length1 = sizeof(checkItems1) / sizeof(checkItems1[0]);
  int length2 = sizeof(checkItems2) / sizeof(checkItems2[0]);

  for (int i = 0; i < length1; i++) {
    if (checkItems1[i] == target) {
      result = true;
      break;
    }
  }

  printf("%s\n", result ? "true" : "false");
  return 0;
}