#include <stdio.h>

int main() {
  int rub = 0, kop = 0, n = 0, rest = 0;
  scanf("%d%d", &rub, &kop);
  n = (rub * 100 + kop) / 106;
  rest = (rub * 100 + kop) - n * 106;
  printf("%d %d", n, rest);
  return 0;
}