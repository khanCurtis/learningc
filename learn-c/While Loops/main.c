#include <stdio.h>

int main(void) {
  {
    int n = 0;
    while (n < 10) {
      n++;
    }

    /* infinite while loop
     * while (1) {
     *  printf("%d", n);
     *  n++;
     * }
     */
  }

  {
    int n = 0;
    while (1) {
      n++;
      if (n == 10) {
        break;
      }
    }
  }

  {
    int n = 0;
    while (n < 10) {
      n++;
      /* Check if n is even */
      if (n % 2 == 1) {
        continue;
      }

      printf("The number %d is even.\n", n);
    }
  }
  int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
  int i = 0;

  while (i < 10) {

    i++;

    if (array[i] < 5) {
      continue;
    }

    if (array[i] > 10) {
      break;
    }

    printf("%d\n", array[i]);
  }

  return 0;
}