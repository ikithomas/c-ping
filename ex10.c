#include <stdio.h>

int main(int argc, char *argv[]){
  for (int i = 0; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  char *states[] = {"Hong Kong", "Kowloon", "CWB", "WanChai"};

  int num_states = 4;

  for (int i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}