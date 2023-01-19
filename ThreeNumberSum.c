//Write a program to print the number of ways a given number can be represented as a three number sum.
/*
TC 1:
input = 1
output = 3
explaination: 
  1+0+0
  0+1+0
  0+0+1

TC 2:
input = 2
output = 6
explaination:
  1+0+1
  1+1+0
  0+1+1
  0+2+0
  2+0+0
  0+0+2

Intuition : sum of first (n+1) natural numbers
*/

#include <stdio.h>

int main() {
  int rslt;
  int input = 6;
  rslt = (input+1)*(input+2)/2;
  printf("%d\n",rslt); //28
  return 0;
}
