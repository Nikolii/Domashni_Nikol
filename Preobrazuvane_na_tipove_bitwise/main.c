#include<stdio.h>
#include<stdlib.h>
#include "quadraticroots.h"

int main(int argc, char* argv[]){

  if(argc < 4){
    printf("\nError!");
  }
  
  else{
    struct QuadraticRootsResult result = findroots(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
    if(result.norealroots == '1'){
      printf("\nNo real roots!");
    }

    else{
      printf("\nx1 = %lf x2 = %lf", result.x1, result.x2);
    }
  }

}