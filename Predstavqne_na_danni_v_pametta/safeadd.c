#include <stdio.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char* argv[]) {

  if(argc != 3) printf("\nError!");
  
  else{
      struct SafeResult result2 = safeadd(safestrtoint(argv[1]).value, safestrtoint(argv[2]).value);
      flow(result2.errorflag, result2.value);
  }

  return 0;
}