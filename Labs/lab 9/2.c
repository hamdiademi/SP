#include <stdio.h>

void print(int n, int i) {
  if (i > n) {
    return;
  }
  printf("%d ", i);
    print(n, i + 1);
}

void triangle(int n, int i) {
  if (i > n) {
    return;
  }
    print(i, 1);
  printf("\n");
  triangle(n, i + 1);
}

int main() {
  int n;
  scanf("%d", &n);
  triangle(n, 1);
  return 0;
}
