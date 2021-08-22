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

static void print_personal_particular(Person p) {
  printf("I am %d years old.\n", p.age);
  printf("I am %d cm tall.\n", p.height);
  printf("If you ask me if I am an adult, I say %s.\n", is_adult(p) ? "yes": "no");
}

int main() {
  Person thomas = (Person) {
    .age = 28,
    .height = 178,
    .origin = JP,
    .mother_tongue = Cantonese,
  };

  print_personal_particular(thomas);

  Person miranda = (Person) {
    .age = 30,
    .height = 160,
    .origin = JP,
    .mother_tongue = Cantonese,
  };

  print_personal_particular(miranda);

  return 0;
}
