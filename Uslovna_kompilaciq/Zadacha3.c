#include<stdio.h>

void main(){
  
  int array[6] = {3, 8, 1, 2, 5, 9};
  
  #ifdef _WIN32
    for (int i = 0; i < 6 - 1; i++) {
      for (int j = 0; j < 6 - i - 1; j++) {
          if (array[j] > array[j + 1]) {
              int temp = array[j];
              array[j] = array[j + 1];
              array[j + 1] = temp;
 
  #elif __linux__
    for (int i = 0; i < 6 - 1; i++) {
      int min = i;
      for (int j = i + 1; j < 6; j++) {
        if (array[j] < array[min]) {
          min = j;
        }
          }
          int temp = array[i];
          array[i] = array[min];
          array[min] = temp;
    }

  #elif __APPLE__
    for (int i = 1; i < 6; i++) {
        int k = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > k) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = k;
    }

  #else 
    int temp;
    for (int i = 0; i < 6 / 2; i++) {
      temp = array[i];
      array[i] = array[6 - i - 1];
      array[6 - i - 1] = temp;
    }

  #endif
    for(int i=0; i<6; i++){
      printf("\narray[%d] = %d", i+1, array[i]);
    }    
    
}