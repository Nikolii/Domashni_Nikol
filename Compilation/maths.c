#include"maths.h"

int factoriel(int a){
  int result = 1;
  for(int i = 1; i <= a; i++){
    result = result*i;
  }
  return result;
}