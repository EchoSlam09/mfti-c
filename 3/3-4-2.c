#include <stdio.h>

int main() {
  float v;
  float s;
  scanf("%f", &v);
  s = 1000.0 / 3600 * v;
  printf("%f", s);
  return 0;
}