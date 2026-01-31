#include <stdio.h>

void sayHello(char name[], int age) {
  printf("Hello, %s", name);
  printf("you are %d years old\n",age);
}

int main() {
  char name[20];
  int age;

  printf("Please enter your name: ");
  fgets(name, 20, stdin);
  printf("Please enter your age: ");
  scanf("%d", &age);
  
  sayHello(name, age);

  return 0;
}
