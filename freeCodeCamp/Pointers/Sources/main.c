#include <stdio.h>

int main() {
  int age = 14;
  int *pAge = &age;
  double gpa = 3.4;
  double *pGpa = &gpa;
  char grade = 'A';
  char *pGrade = &grade;

  printf("age's memory address: %p\n", pAge);     // &age
  printf("gpa's memory address: %p\n", pGpa);     // &gpa
  printf("grade's memory address: %p\n", pGrade); // &grade

  printf("age's value: %d\n", *pAge); // *&age
  printf("age's value: %d\n", *&age);
  printf("age's memory address: %p\n", &*&age);

  return 0;
}
