#include<stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]){
  
  int length;
  if(argc == 2){ 
    length = strlength(argv[1]);
    printf("\nLength = %d", length);
  }
  else printf("\nError!");

}