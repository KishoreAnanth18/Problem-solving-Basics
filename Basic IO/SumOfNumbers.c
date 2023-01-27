// Given a range. Find the sum of numbers in it.
/*
input = 4
output = 10
explain:
  1+2+3+4 = 10
*/

#include <stdio.h>
int main() {
  int sum = 0;
  int range = 10;
  for (int num = 1; num <= range; num++) {
    sum += num;
  }
  printf("%d\n", sum); // 55
  return 0;
}
