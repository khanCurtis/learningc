#include <stdio.h>

int main() {
  char grade;

  printf("Please enter your grade: ");
  scanf("%c", &grade);

  switch (grade) {
    case 'A' :
      printf("You did Amazing!\n");
      break;
    case 'B' :
      printf("You did Great!\n");
      break;
    case 'C' :
      printf("Good Job!\n");
      break;
    case 'D' :
      printf("Not great\n");
      break;
    case 'F' :
      printf("You Failed\n");
      break;
    default :
      printf("Not a valid grade.\n");
  }

  return 0;
}
