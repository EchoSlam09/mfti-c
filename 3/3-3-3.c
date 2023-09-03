#include <stdio.h>

int main() {
  int k_rice, k_veg, money;
  scanf("%d", &k_rice);
  scanf("%d", &k_veg);
  money = k_rice + k_veg * 2;
  printf("%d", money);
  return 0;
}
