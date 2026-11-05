#include <stdio.h>

void fun(int* p) {
  *p=20;
  printf("Address of x in fun: %p\n", p);

}
int main() {
  int x=10;
  fun(&x);
  

    return 0;
}