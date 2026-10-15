#include <stdio.h>

int main() {
 
  int x;
  scanf("%d", &x);
  int max=0;
  for(int i=1; i<=x; i++){
     int y;
    scanf("%d", &y);

   
  
    if(y>max){
        max=y;
    }



  }
  printf("%d \n", max);

    return 0;
}