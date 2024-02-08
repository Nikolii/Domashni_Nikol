#ifndef _QUADRATICROOTS_H_
#define _QUADRATICROOTS_H_

struct QuadraticRootsResult{
  double x1;
  double x2;
  char norealroots;
};

struct QuadraticRootsResult findroots(double a, double b, double c);

#endif