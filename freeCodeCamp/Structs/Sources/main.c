#include <stdio.h>
#include <string.h>

struct Student {
  char name[50];
  char major[50];
  int age;
  double gpa;
};

int main() {
  struct Student student1;
  strcpy(student1.name, "Khanon");
  student1.age = 18;
  strcpy(student1.major, "Computer Science");
  student1.gpa = 3.4;

  struct Student student2;
  strcpy(student2.name, "Boston");
  student2.age = 16;
  strcpy(student2.major, "N/A");
  student2.gpa = 3.7;

  printf("\nStudent Information\n");
  printf("Student 1\n");
  printf("Name: %s\n", student1.name);
  printf("Age: %d\n", student1.age);
  printf("Major: %s\n", student1.major);
  printf("GPA: %.1f\n", student1.gpa);

  printf("\n\nStudent 2\n");
  printf("Name: %s\n", student2.name);
  printf("Age: %d\n", student2.age);
  printf("Major: %s\n", student2.major);
  printf("GPA: %.1f\n", student2.gpa);

  return 0;
}
