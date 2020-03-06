#include <cstdio>
int main() {
  int x, n = 0, min, max, s = 0;
  while (scanf("%d", &x) == 1) {
    s += x;
    n++;
    if (x < min) {
      min = x;
    }
    if (x > max) {
      max = x;
    }
  }
  printf("%d %d %.3f\n", min, max, (double)s / n);
  return 0;
}