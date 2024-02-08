#include<stdio.h>
#include<limits.h>

int main(void) {
  
  printf("\n%-10s %-7s %-7s %-25s %-25s %-25s", "Type", "Print", "Size", "MIN", "MAX", "UMAX");
  printf("\n%-10s %-7s %-7zu %-25d %-25d %-25u", "char", "%c", sizeof(char), CHAR_MIN, CHAR_MAX, UCHAR_MAX); 
  printf("\n%-10s %-7s %-7zu %-25d %-25d %-25u", "int", "%d", sizeof(int), INT_MIN, INT_MAX, UINT_MAX);
  printf("\n%-10s %-7s %-7zu %-25d %-25d %-25u", "short", "%hd", sizeof(short), SHRT_MIN, SHRT_MAX, USHRT_MAX);  
  printf("\n%-10s %-7s %-7zu %-25ld %-25ld %-25lu", "long", "%ld", sizeof(long), LONG_MIN, LONG_MAX, ULONG_MAX); 
  printf("\n%-10s %-7s %-7zu %-25lld %-25lld %-25llu", "long long", "%lld", sizeof(long long), LLONG_MIN, LLONG_MAX, ULLONG_MAX); 

}
