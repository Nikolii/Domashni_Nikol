#include <stdio.h>

int main(void) {
  int a = 12, b = 18, max, nok;

  if (a > b) max = a;
  else max = b;

  while (1) {
    if(max % a == 0 && max % b == 0) {
      nok = max;
      break;
    }
    max = max + 1;
  }
  
  printf("\nNOK = %d", nok);
  
}