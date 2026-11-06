#include <stdio.h>

int main() {
  int a[5] = {1, 2, 3, 4, 5};
  int* ptr = a; // Pointer to the first element of the array
  printf("Address of first element: %p\n", ptr);

    return 0;
}