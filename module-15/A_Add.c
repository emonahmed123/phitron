#include <stdio.h>

int fun(int a, int b) {
  return a + b;

}

int main() {
  
  int a, b;
  scanf("%d %d", &a, &b);
  int result = fun(a, b);
  printf("%d\n", result);
  return 0;
}