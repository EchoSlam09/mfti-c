#include <stdio.h>

int main() {
  int bell;
  int nbell;
  scanf("%d%d", &bell, &nbell);
  int allbell = (bell + nbell) / 2 * 2;
  printf("%d", allbell);
  return 0;
}