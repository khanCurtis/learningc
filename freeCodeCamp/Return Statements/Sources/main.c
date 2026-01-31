#include <stdio.h>

double cube(double num) {
  double result = num * num * num;
  
  return result;
}

int num(int num);

int main() {

  printf("Answer: %f\n", cube(3.0));
  printf("%d\n", num(5));

  return 0;
}

int num(int num) {
  return num;
}
