#include<stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]){
  
  if(argc == 3){
    int result = strcompare(argv[1], argv[2]);
    printf("\n%d", result);
  }
  else printf("\nError!");

}
