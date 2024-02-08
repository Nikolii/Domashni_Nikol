#include<stdio.h>
#define SWAP(Type, a, b){ \
  Type temp = a; \
  a = b; \
  b = temp; \
}

void TYPE_INT(int a, int b)
{
  printf("\nEnter value of a: ");
  scanf("%d", &a);
  printf("\nEnter value of b: ");
  scanf("%d", &b);
  SWAP(int, a, b);
  printf("\na = %d \nb = %d", a, b);
}

void TYPE_DOUBLE(double c, double d)
{
  printf("\nEnter value of a: ");
  scanf("%lf", &c);
  printf("\nEnter value of b: ");
  scanf("%lf", &d);
  SWAP(double, c, d);
  printf("\na = %lf \nb = %lf", c, d);
}
  
void main()
{
  int a, b, c, d, x;
  while(x!=0){
  printf("\nFor integers type 1 \nFor double type 2 \nFor exit type: 0 \nType here: ");
  scanf("%d", &x);
  if(x==1){
    TYPE_INT(a, b);
  }
  if(x==2){
    TYPE_DOUBLE(c, d);
  }
  }
}