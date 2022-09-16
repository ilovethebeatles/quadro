#include "quadratic.h"

double BiggerRoot(const double a, const double b, const double c) {
  if (a == 0) {
    double bigger_root = - c / b;
  }
  double d = b * b - 4 * a * c;
  double bigger_root = (- b + sqrt(d)) / (2 * a);
  return bigger_root;
}

double SmallerRoot(const double a, const double b, const double c) {
  double d = b * b - 4 * a * c;
  double smaller_root = (- b - sqrt(d)) / (2 * a);
  return smaller_root;
}

short int NumOfRoots(const double a, const double b, const double c) {
  double d = b * b - 4 * a * c;
  if (d < 0) {
    return 0;
  }
  if (d == 0 || a == 0) {
    return 1;
  }
  if (d > 0) {
    return 2;
  }
  return -1;
}

void PrintRoots (const double a, const double b, const double c) {
    short int num = NumOfRoots(a, b, c);
    if (num == 0) {
      printf("No roots!\n");
    } else if (num == 1) {
      printf("%.2lf is a root\n", BiggerRoot(a, b, c));
    } else if (num = -1) {
      printf("Infinite number of roots\n");
    } else {
      printf("%.2lf is a smaller root\n", SmallerRoot(a, b, c));
      printf("%.2lf is a bigger root\n", BiggerRoot(a, b, c));
    }
}
