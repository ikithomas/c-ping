#include <stdio.h>

int main(int argc, char *argv[]) {
  int areas[] = { 10, 12, 13, 14, 20 };
  char name[] = "Zed";
  char full_name[] = { 'Z', 'e', 'd', ' ', 'S', 'h', 'a', 'w', '\0' };

  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of area: %ld\n", sizeof(areas));
  printf("Length of areas: %lu\n", sizeof(areas) / sizeof(int));
  printf("1st and 2nd: %d, %d", areas[0], areas[10]);

  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of name: %ld\n", sizeof(name));
  printf("Length of name: %lu\n", sizeof(name) / sizeof(char));

  printf("Fullname is %s\n", full_name);

  return 0;
}
