#include<stdio.h>
#define ARRAY(array){ \
  for(int i=0; i<5; i++){\
    printf("\nEnter first number: "); \
    scanf("%d", &array[i]); \
  } \
}
#define ARRAY_PRINT(array){ \
  for(int i=0; i<5; i++){ \
    printf("\narray[%d] = %d", i+1, array[i]); \
  } \
}
int main()
{
  int array[5];
  ARRAY(array);
  ARRAY_PRINT(array);
  return 0;
}