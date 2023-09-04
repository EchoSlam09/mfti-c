#include <stdio.h>

int main() {
  int round;
  int total;
  scanf("%d%d", &round, &total);
  //   int total_round;
  //   total_round = total / round;
  int finish;
  //   finish = total - round * total_round;
  finish = total % round;
  printf("%d %d", total / round, finish);
  return 0;
}