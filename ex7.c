#include <stdio.h>

int main(int argc, char* argcv[]){
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[] = "Shaw";

  printf("Distance: %d\n", distance);
  printf("power: %f\n", power);
  printf("spower: %f\n", super_power);
  printf("Initial: %c\n", initial);
  printf("firstName: %s\n", first_name);
  printf("lastName: %s\n", last_name);
  printf("fullname: %s %c. %s\n", first_name, initial, last_name);

  int bugs = 100;
  double bug_rate = 1.2;

  printf("Buggy data: %d %f", bugs, bug_rate);

  unsigned long universe_of_defects = 9223372036854775808UL;
  printf("The entire universe has %lu bugs.\n", universe_of_defects);

  double expected_bugs = bugs * bug_rate;
  printf("Expected %.2f.\n", expected_bugs);

  double part_of_universe = expected_bugs / universe_of_defects;
  printf("That is only a %e portion of the universe.\n", part_of_universe);

  char nul_byte = 5;
  int care_percentage = bugs * nul_byte;
  printf("Which means you should care %d%%.\n", care_percentage);

  return 0;
}
