#include<stdio.h>
#define MAX_NUMBER(a, b) ((a > b) ? a : b)
void main()
{
  int a, b;
  printf("\nEnter first number = ");
  scanf("%d", &a);
  printf("\nEnter second number = ");
  scanf("%d", &b);
  int max_number = MAX_NUMBER(a, b);
  printf("\nThe larger number is: %d", max_number);
}