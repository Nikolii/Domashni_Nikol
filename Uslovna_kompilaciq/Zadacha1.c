#include <stdio.h>

#define DEBUG(array, size, type) { \
  for(type i = 0; i < size; i++) { \
    type min = i; \
    for (type j = i + 1; j < size; j++) { \
      if (array[j] < array[min]) { \
      type min = j; \
      type temp = array[min]; \
      array[min] = array[i]; \
      array[i] = temp; \
      } \
    } \
  } \
  for(type i=0; i<size; i++){ \
    if(i%3 == 0){ \
      sum = sum + array[i]; \
      printf("\n %d", array[i]); \
    } \
  } \
} 


int main(){
  int sum=0;
  int array[6] = {12, 4, 2, 8, 10, 1};
  #ifdef DEBUG
  DEBUG(array, 6, int);
  for (int i = 0; i < 6; i++) {
    printf("\n array[%d] = %d", i+1, array[i]);
  }
  printf("\n Sum = %d", sum);
  #endif
  return 0;
}