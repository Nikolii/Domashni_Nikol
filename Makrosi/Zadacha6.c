#include<stdio.h>

#define ARRAY(array){ \
  for(int i=0; i<6; i++){\
    printf("\nEnter first number: "); \
    scanf("%d", &array[i]); \
  } \
}
#define ARRAY_PRINT(array){ \
  for(int i=0; i<6; i++){ \
    printf("\narray[%d] = %d", i+1, array[i]); \
  } \
}

#define SORT_ARRAY_ASCENDING(array, size, type) { \
  for (int i = 0; i < size; i++) { \
    int min = i; \
    for (int j = i + 1; j < size; j++) { \
      if (array[j] < array[min]) { \
        min = j; \
      } \
    } \
    SWAP(type, array[i], array[min]) \
  } \
  printf("\nSorted array ascending: "); \
  ARRAY_PRINT(array); \
}

#define SORT_ARRAY_DESCENDING(array, size, type) { \
  for (int i = 0; i < size; i++) { \
    int max = i; \
    for (int j = i + 1; j < size; j++) { \
      if (array[j] > array[max]) { \
        max = j; \
      } \
    } \
    SWAP(type, array[i], array[max]) \
  } \
  printf("\nSorted array descending: "); \
  ARRAY_PRINT(array); \
}

#define SWAP(Type, a, b){ \
  Type temp = a; \
  a = b; \
  b = temp; \
}

void main()
{
  int array[6];
  ARRAY(array);
  SORT_ARRAY_DESCENDING(array, 6, int);
  SORT_ARRAY_ASCENDING(array, 6, int);
}
