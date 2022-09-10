void PrintRoots (const double a, const double b, const double c) {
    short int num = NumOfRoots(a, b, c);
    if (num == 0) {
      printf("No roots!");
    } else if (num == 1) {
      printf("%.2lf is a root/n", BiggerRoot(a, b, c));
    } else {
      printf("%.2lf is a smaller root/n", SmallerRoot(a, b, c));
      printf("%.2lf is a bigger root/n", BiggerRoot(a, b, c));
    }
}