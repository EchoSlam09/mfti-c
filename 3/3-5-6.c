#include <stdio.h>

int main() {
  int n;
  int day;
  int m;
  scanf("%d%d", &n, &day);
  m = (n - day) / 7;
  printf("%d", m);
  return 0;
}