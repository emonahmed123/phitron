#include <stdio.h>

int main() {
 
  int x;
  scanf("%d", &x);
for(int i=1; i<=x; i++){
    if(i%2==0){
        printf("%d \n", i);
         if(i%2!=0){
        printf("%d \n", -1);
    }
    }
   
}

    return 0;
}