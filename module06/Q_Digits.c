#include <stdio.h>

int main() {
 
  int x;
  scanf("%d", &x);
 
 for (int i = 1; i <= x; i++)
 {
  int y;
  scanf("%d", &y);
   do
   {
   printf("%d ", y%10);
   y = y /10; 

   } while (y != 0) ;
 
  printf("\n");
 }
 

    return 0;
}