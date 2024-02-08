#include<stdio.h>

#define ARRAY_SIZE 7

void main(){
 
  #if defined(ARRAY_SIZE) && ARRAY_SIZE >= 1 && ARRAY_SIZE <= 10
  
  int array[ARRAY_SIZE];
  int j=1;
  for(int i=0;i<ARRAY_SIZE; i++){
    array[i]=j;
    j=j*2;
  }
  for(int i=0; i<ARRAY_SIZE; i++){
    printf("\narray[%d] = %d", i+1, array[i]);
  }
  
  #else
  
    printf("\nInvalid array size!");
  
  #endif
  
}