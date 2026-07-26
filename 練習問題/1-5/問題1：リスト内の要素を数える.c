/*
 * 問題1：リスト内の要素を数える（C版）
 *
 * Python の for i in list: は「次の要素を取り出す」を言語が隠す。
 * C では配列の長さと添字を自分で管理する。
 *
 * コンパイル例:
 *   cc -o count_items
 * "C_日本語擬似コードで学ぶプログラミングへの第一歩：5つの基本アルゴリズム問題集.c"
 * 実行例:
 *   ./count_items
 */

#include <stdio.h>

int main(void) {
  int items[] = {1, 2, 3};
  /* 要素数 = 配列全体のバイト数(4*3 = 12) / 1要素のバイト数(4) = 3となる*/
  int length = sizeof(items) / sizeof(items[0]);
  int count = 0;

  /* C風の for: 初期化; 続ける条件; 毎回の更新 */
  for (int i = 0; i < length; i++) {
    count += 1;
  }

  printf("%d\n", count);
  return 0;
}
