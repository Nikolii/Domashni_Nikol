#include<stdio.h>

#define FUNCTION(A, B) ((A+B)*(A+B))

int main(void){
  printf("\nResult = %d", FUNCTION(5, 3));
}