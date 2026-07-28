#include <stdio.h>
#include <string.h>

// int main(void) {
//   int height = 5;
//   char result[64] = ""; // あらかじめ最大63文字 + 終端のヌル文字\0で埋める

//   while (height > 0) {
//     strcat(result, "#\n"); // strcatは既存の文字列の後ろに連結する役割がある
//     height -= 1;
//   }

//   printf("%s", result); // リストの先頭から\0の手前まで出力
//   return 0;
// }

int main(void) {
  int height = 5;
  char lines[16][8]; // 16行分、最大8文字の配列を用意
  int count = 0;
  int i;

  while (height > 0) {
    // 1行分として "#" をコピー（終端 \0 も付く）
    strcpy(lines[count], "#");
    count += 1;
    height -= 1;
  }

  for (i = 0; i < count; i++) {
    printf("%s\n", lines[i]);
  }
  return 0;
}