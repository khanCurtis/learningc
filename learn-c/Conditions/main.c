#include <stdio.h>

void guessNumber(int guess) {
  if (guess == 555) {
    printf("Correct. You guessed it!\n");
  } else if (guess < 555) {
    printf("Your guess is too low.\n");
  } else {
    printf("Your guess is too high.\n");
  }
}

int main(void) {
  {
    {
      int target = 10;
      if (target == 10) {
        printf("Target is equal to 10\n\n");
      }
    }

    {
      int foo = 1;
      int bar = 2;

      if (foo == bar) {
        printf("foo is smaller than bar.\n\n");
      } else if (foo == bar) {
        printf("foo is equal to bar.\n\n");
      } else {
        printf("foo is greater than bar.\n\n");
      }
    }

    {
      int peanuts_eaten = 22;
      int peanuts_in_jar = 100;
      int peanut_limit = 50;

      if (peanuts_in_jar > 80) {
        if (peanuts_eaten < peanut_limit) {
          printf("Take as many as you want!\n");
        }
      } else {
        if (peanuts_eaten > peanuts_in_jar) {
          printf("You cannot have anymore peanuts!\n");
        } else {
          printf("Alright, just 1 more peanut\n");
        }
      }
    }

    {
      int foo = 1;
      int bar = 2;
      int moo = 3;

      if (foo < bar && moo > bar) {
        printf("foo is smaller than bar AND moo is larger than bar.\n\n");
      } else if (foo < bar || moo > bar) {
        printf("foo is smaller than bar OR moo ir larger than bar.\n\n");
      }
    }

    {
      int target = 9;
      if (target != 10) {
        printf("Target is NOT equal to 10\n\n");
      }
    }

  }

  guessNumber(500);
  guessNumber(600);
  guessNumber(555);

  return 0;
}