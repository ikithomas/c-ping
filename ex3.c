#include <stdio.h>
#include <stdbool.h>

typedef enum {
  HK,
  JP,
  AU,
  US,
  FI,
} Country;

typedef enum {
  English,
  Chinese,
  Cantonese,
  Japanese,
  Korean,
  Spanish,
} Language;

typedef struct {
  int age;
  int height;
  Country origin;
  Language mother_tongue;
} Person;

static bool is_adult(Person person) {
  return person.age >= 18;
}

int main() {
  Person thomas = (Person) {
    .age = 28,
    .height = 178,
    .origin = JP,
    .mother_tongue = Cantonese,
  };

  printf("I am %d years old.\n", thomas.age);
  printf("I am %d cm tall.\n", thomas.height);
  printf("If you ask me if I am an adult, I say %s.\n", is_adult(thomas) ? "yes": "no");

  return 0;
}
