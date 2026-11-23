#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
 int r= 6 +n/2;

 for (int i = 0; i <r; i++)
 {
  for (int s = 0; s <r-1-i ; s++)
  {
    printf(" ");
  }
  for (int st = 0; st < 2*i+1; st++)
  {
    printf("*");
  }
  printf("\n");
  
 }

 for (int i = 0; i < 5; i++)
 {
   for (int s = 0; s < 5; s++)
   {
     printf(" ");
   }
   for (int st = 0; st < n ; st++)
   {
     printf("*");
   }
   printf("\n");
 }

  return 0;
}