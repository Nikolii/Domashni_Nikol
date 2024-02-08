#include <stdio.h>
#include "transformation.h"

int main(void) {
  struct transformation Tmp;
  Tmp = function();
  printf("\nResult = %ld \nError = %s", Tmp.result, Tmp.error); 
}