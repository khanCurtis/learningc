#include <stdio.h>

int main() {
  int secretNumber = 5;
  int guess;
  int guessCount = 0;
  int guessLimit = 5;
  int outOfGuesses = 0;

  while (guess != secretNumber && outOfGuesses == 0) {
    if (guessCount < guessLimit) {
      printf("Guess a number: ");
      scanf("%d", &guess);
      guessCount++;
    } else {
      outOfGuesses = 1;
    }
  }
  
  if (outOfGuesses == 0) {
    printf("You Win!\n");
  } else {
    printf("You ran out of Guesses!\n");
  }
  
  return 0;
}
