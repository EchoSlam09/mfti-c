#include <stdio.h>

int main() {
  int n;
  float k;
  scanf("%d%f", &n, &k);
  int v = n - (n * k);
  printf("%d", v);
  return 0;
}