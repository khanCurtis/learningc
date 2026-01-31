#include <stdio.h>

int main() {
  int i = 1;
  while (i <= 5) {
    printf("%d\n", i);
    i++;
  }

  int j = 6;
  do {
    printf("%d\n", j);
    j++;
  } while (i <= 5);

  return 0;
}
