#include<stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]){
  
  if(argc == 3) strconcat(argv[1], argv[2]);
  else printf("\nError!");

}