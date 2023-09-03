#include <stdio.h>

int main() {
  int hours, minutes;
  scanf("%d", &hours);
  scanf("%d", &minutes);
  int result_minuts;
  result_minuts = hours * 60 + minutes;
  int result_second;
  result_second = result_minuts * 60;
  printf("%d\n%d", result_minuts, result_second);
  return 0;
}