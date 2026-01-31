#include <stdio.h>

int main() {
  char name[] = "John";
  char age = 35;

  printf("There once was a man named %s\n", name);
  printf("he was %d years old\n", age);
  printf("he loved the name %s\n", name);
  printf("%s did not like being %d\n", name, age - 1);

  return 0;
}
