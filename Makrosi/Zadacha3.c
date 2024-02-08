#include<stdio.h>
#define DEBUG(a){ \
printf("\nName of the variable: %s \nValue of the variable = %d \nFile: %s \nLine: %d", #a, a, __FILE__, __LINE__); \
}
void main()
{
  int a;
  printf("\nEnter a value for a = ");
  scanf("%d", &a);
  DEBUG(a);
}