#include <stdio.h>

int main() {
  char color[20];
  char pluralNoun[20];
  char celebFirst[20];
  char celebLast[20];

  printf("Enter a color: ");
  scanf("%s", color);
  printf("Enter a plural noun: ");
  scanf("%s", pluralNoun);
  printf("Enter a celebrity: ");
  scanf("%s%s", celebFirst, celebLast);

  printf("Roses are %s\n", color);
  printf("%s are blue\n", pluralNoun);
  printf("I love %s %s\n", celebFirst, celebLast);

  return 0;
}
