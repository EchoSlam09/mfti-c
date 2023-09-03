#include <stdio.h>

int main() {
  float m;
  float h;
  float imt;
  scanf("%f%f", &m, &h);
  imt = m / (h * h);
  printf("%f", imt);

  return 0;
}