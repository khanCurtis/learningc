#include <stdio.h>

int main() {
  int age = 14;
  double gpa = 3.7;
  float change = 5.79;
  char grade = 'A';
  char name[] = "Jerry";

  printf("Hello, my name is %s, I am %d years old with a majority of %c Grades, my gpa is: %.1f, and my allowance is $%.2f\n", name, age, grade, gpa, change);

  return 0;
}
