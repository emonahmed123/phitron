#include <stdio.h>

int main() {
  
  int x;
  scanf("%d", &x);
  int y;
  for(int i=1; i<=x;i++){

   
      if(x%i == 0){
          printf("%d\n", i);
      }



  }

    return 0;
}