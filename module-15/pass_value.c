#include <stdio.h>

void fun(int x) {
  printf("Address of x in fun: %p\n", &x);
  printf("Value of x in fun: %d\n", x);
}

int main() {
  int x = 10;
  
  fun(x);

    return 0;
}