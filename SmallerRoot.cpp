double SmallerRoot(const double a, const double b, const double c) {
  double d = b * b - 4 * a * c;
  double smaller_root = (- b - sqrt(d)) / (2 * a);
  return smaller_root;
}