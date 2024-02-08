#ifndef _SAFEINT_H_
#define _SAFEINT_H_

struct SafeResult{
  int value;
  char errorflag;
};

struct SafeResult safeadd(int a, int b);
struct SafeResult safesubtract(int a, int b);
struct SafeResult safemultiply(int a, int b);
struct SafeResult safedivide(int a, int b);
struct SafeResult safestrtoint(const char* string);

#endif