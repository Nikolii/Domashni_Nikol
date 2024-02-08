#include<stdio.h>
#include<math.h>

int main(void){
  long array[5] = {5, 4, 7, 2, 3};
  for(int i=0; i<5; i++){
    array[i] = pow(array[i], 4);
  }
  for(int i=0; i<5; i++){
    printf("\nArray[%d] = %ld", i+1, array[i]);
  }
}