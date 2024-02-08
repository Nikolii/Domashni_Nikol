#include<stdio.h>
#include <limits.h>
#include<stdlib.h>
#include "safeint.h"

struct SafeResult safeadd(int a, int b){

  struct SafeResult result;
  if (a > INT_MAX - b || a < INT_MIN - b){
    result.errorflag = '1';
    result.value = 0;
  } 
  else {
    result.errorflag = '0';
    result.value = a + b;
  }
  return result;
}

struct SafeResult safesubtract(int a, int b){

  struct SafeResult result;
  if (a < INT_MIN + b || a > INT_MAX + b) {
    result.errorflag = '1';
    result.value = 0;
  } 
  else {
    result.value = a - b;
    result.errorflag = '0';
  }
  return result;
}

struct SafeResult safemultiply(int a, int b){

  struct SafeResult result;
  if (a > INT_MAX / b || a < INT_MIN / b) {
    result.errorflag = '1';
    result.value = 0;
  } 
  else {
    result.errorflag = '0';
    result.value = a * b;
  }
  return result;
}

struct SafeResult safedivide(int a, int b){

  struct SafeResult result;

  result.value = 0;
  result.errorflag = '0';

  if(b == 0){
    result.errorflag = '1';
    return result;
  }

  else if( a < INT_MIN * b || a > INT_MAX * b){
    result.errorflag = '1';
    return result;
  }

    result.value = a / b;
    return result;
}

struct SafeResult safestrtoint(const char *string){

  struct SafeResult result;
  
  result.errorflag = '0';
  result.value = 0;
  int sign = 1, i = 0, result_2, c = 0;
  char a;
  if(string[0] == '-') {
    i = 1;
    sign = -1;
  }
  for(; string[i] != '\0'; i++){
    if(string[i] <= '9' && string[i] >= '0'){
      safemultiply(result.value, 10);
      a = string[i] - '/0';
      safeadd(result.value, atoi(a));
    }
    else{
      result.errorflag = '1';
      result.value = 0;
      return result;
    }
  }
  
  if(sign == -1) result.value = result.value * sign;
  return result;

}