#include<stdio.h>
#include<math.h>
#include "quadraticroots.h"

struct QuadraticRootsResult findroots(double a, double b, double c) {

  struct QuadraticRootsResult roots;

  roots.norealroots = '0';
  double D = b * b - 4 * a * c;

  if (D < 0) {
    roots.norealroots = '1';
    return roots;
  }

  else if(D == 0) {
    roots.x1 = ((-b) / 2*a);
    roots.x2 = roots.x1;
    return roots;
  }

  else {
    roots.x1 = (-b + sqrtl(D)) / (2 * a);
    roots.x2 = (-b - sqrtl(D)) / (2 * a);
    return roots;
  }

}
