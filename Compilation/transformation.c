#include <stdlib.h>
#include <string.h>
#include"transformation.h"

struct transformation function(){
  struct transformation tmp;
  char str[100] = "-oi987";
  long number = atoi(str);
  if(number>0 || number<0){
    tmp.result = number;
    strcpy(tmp.error, "\0");
  } 
  else{
      tmp.result = 0;
      strcpy(tmp.error, "Invalid input string");
  }
  return tmp;
}