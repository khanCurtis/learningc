#include <stdio.h>

int main() {
  char line[255];

  FILE *wpointer = fopen("hello.txt", "w");
  fprintf(wpointer, "Hello, World!\n");
  fclose(wpointer);

  printf("Successfully Writen.\n");

  FILE *apointer = fopen("hello.txt", "a");
  fprintf(apointer, "Hello, Earth!\n");
  fclose(apointer);

  printf("Successfully Appended.\n");

  FILE *rpointer = fopen("hello.txt", "r");
  fgets(line, 255, rpointer);
  fclose(rpointer);

  printf("\nFile Contents:\n\"\n%s\"\n", line);

  return 0;
}
