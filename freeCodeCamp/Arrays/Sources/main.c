#include <stdio.h>

int main() {
  int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
  int otherNumbers[10];
  char phrase[22] = "this is also an array!";

  printf("%d\n", luckyNumbers[0]);
  
  luckyNumbers[0] = 200;
  printf("%d\n", luckyNumbers[0]);
  
  otherNumbers[4] = 40;
  printf("%d\n", otherNumbers[4]);
  printf("%d\n", otherNumbers[3]); // position 3 is not declared so it will return an unknown integer

  printf("%s\n", phrase);
  return 0;
}
