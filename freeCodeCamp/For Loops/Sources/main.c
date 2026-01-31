#include <stdio.h>

int main() {
  int arr[] = {4, 8, 15, 16, 23, 42};

  for (int i = 1; i <= 5; i++) {
    printf("%d\n", i);
  }

  printf("\n");

  for (int j = 0; j <= 6; j++) {
    printf("%d\n", arr[j]);
  }

  return 0;
}
