#include <stdio.h>
int main() {
  int n, p = 10000;
  scanf("%d", &n);
  for (int i = 0; i < 5; i++) {
    if (i < 4)
      printf("%-*d", 81, n / p);
    else
      printf("%d", n);
    p /= 10;
  }
}