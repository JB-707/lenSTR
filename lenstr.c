#include "lenstr.h"

int lenstr(char targetString[]){
  int length = 0;
  while(targetString[length] != '\0'){
    length++;
  }
  return length;
}
