#include "quadratic.cpp"

int main() {
  double a = 0;
  double b = 0;
  double c = 0;
  int idx = 100;
  short int num_of_roots = -1;
  printf("Press 0 if you want to enter a, b, c:\n");
  printf("Press 1 if you want to print the equation's roots:\n");
  printf("Press 2 if you want to find the number of roots:\n");
  printf("Press -1 if you want to exit:\n");
  printf("Enter command: ");
  scanf("%d", &idx);
  while(idx != -1) {
    if (idx == 0) {
      printf("Enter a, b, c:\n");
      scanf("%lf %lf %lf", &a, &b, &c);
    } else if (idx == 1) {
      PrintRoots(a, b, c);
    } else if (idx == 2) {
      num_of_roots = NumOfRoots(a, b, c);
    } else {
      printf("You've entered an unexisting command, please, read the instructions again\n");
    }
    printf("Enter command: ");
    scanf("%d", &idx);
  }
  return 0;
}
