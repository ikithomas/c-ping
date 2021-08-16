#include <stdio.h>

static int add(int numberOfApple, int numberOfOrange)
{
  return numberOfApple + numberOfOrange;
}

int main()
{
  int age = 10;
  int height = 72;

  int numberOfFruits = add(34, 93);

  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);
  printf("I have %d fruits.\n", numberOfFruits);

  return 0;
}
