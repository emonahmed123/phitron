#include <stdio.h>

int main() {
  int a;
  int b;
  scanf("%d %d", &a, &b);

if( a % b == 0) {
    printf("Multiples");

    return 0;
}else if (b%a==0)
{
  printf("Multiples");
  return 0;
}


else {
    printf("No Multiples");
    return 0;
}}