#include <stdio.h>

int main() {
  int age;
  double gpa;
  char grade;
  char name[20]; // name will be able to store 20 characters

  printf("Enter your name: ");
  fgets(name, 20, stdin); // Gets entire line, INCLUDING the return key
  printf("Enter your grade: ");
  scanf("%c", &grade); // to get input you NEED to borrow the variable
  printf("Enter your age: ");
  scanf("%d", &age); // to get input you NEED to borrow the variable
  printf("Enter your gpa: ");
  scanf("%lf", &gpa); // to get input you NEED to borrow the variable

  printf("Your name is %s, you are %d years old, with a gpa of %.1f, your average grade is: %c.\n", name, age, gpa, grade);

  return 0;
}
