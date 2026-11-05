#include <stdio.h>

int main() {
  int x=10;
  
  printf("Address of x: %p\n", &x);
  printf("Value of x: %d\n", x);
  int* ptr = &x;
  printf("Address stored in ptr: %p\n", ptr);

    return 0;
}