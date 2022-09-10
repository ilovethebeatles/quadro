short int NumOfRoots(const double a, const double b, const double c) {
  double d = b * b - 4 * a * c;
  if (d < 0) {
    return 0;
  }
  if (d == 0 || a == 0) {
    return 1;
  }
  return 2;
}