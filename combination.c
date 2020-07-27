/*漸進式　排列組合計算
from C語言於演算法與資料結構之實習應用(河西朝雄 著) 1-1*/

#include <stdio.h>
#include <stdlib.h>

long combination(int, int);

int main(void) {
  int n, r;
  for (n = 0; n <= 5; n++) {
    for (r = 0; r <= n; r++) {
      printf(" C(%d, %d) = %ld  ", n, r, combination(n, r));
    }
    printf("\n");
  }
  system("pause");
}

long combination(int n, int r) {
  int i;
  long p = 1;

  for (i = 1; i <= r; i++) {
    p = p * (n - i + 1) / i;
  }
  return p;
}