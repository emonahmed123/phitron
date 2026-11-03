#include <stdio.h>

int main() {
  int n;
  int start = 1;
  int space = n - 1;
  scanf("%d",&n); 
 for(int i=1;i<=n;i++){
 for(int j=1;j<=space;j++){
     printf(" ");
   }

   for(int j=1;j<=start;j++){
     printf("*");
   }
   printf("\n");
   start+=2;
   space--;
 }
    return 0;
}