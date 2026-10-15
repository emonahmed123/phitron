#include <stdio.h>

int main() {
 
  int x;
  scanf("%d", &x);

  if (x==1)
  {
    printf("%d \n", -1);
  }
  
for(int i=1; i<=x; i++){
    if(i%2==0){
        printf("%d \n", i);
     
    }
   
}

    return 0;
}