double BiggerRoot(const double a, const double b, const double c) {
  double d = b * b - 4 * a * c;
  double bigger_root = (- b + sqrt(d)) / (2 * a);
  return bigger_root;
}