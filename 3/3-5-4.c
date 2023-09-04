#include <stdio.h>

int main() {
  float s, w, ch;
  int res;
  scanf("%f%f%f", &s, &w, &ch);
  res = s / w / ch;
  printf("%d", res);
  return 0;
}