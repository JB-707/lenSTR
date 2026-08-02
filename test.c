#include "lenstr.h"
#include <stdio.h>

int main(){
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int count = lenstr(alphabet);

  printf("The alphabet has %d characters", count);
  return 0;
}
