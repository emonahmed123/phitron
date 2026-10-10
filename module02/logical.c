#include <stdio.h>

int main() {

  int a = 5;
  int b = 10;
  int c =4;
  int d = 4;
   if (a > b || c > d) {
        printf("%d is greater than %d\n", a, b);
    } else if (a < b) {
        printf("%d is less than %d\n", a, b);
    } else {
        printf("%d is equal to %d\n", a, b);
    }

    if(a==b) {
        printf("%d is equal to %d\n", a, b);
    } else {
        printf("%d is not equal to %d\n", a, b);
    }

    return 0;

};