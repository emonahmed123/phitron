#include <stdio.h>

int main() {
  
  int n;
  scanf("%d", &n);
  int hash=1;
  int space=n-1;
 
  for(int i=1; i<=n; i++){

    for(int j=1; j<=space; j++){
      printf(" ");
    }

    for(int j=1; j<=hash; j++){
  
        if(i==j){
          for(int j=i; j>=1; j--){
        printf("%d", j);
        }
        }
     
    }
   

  
    
       printf("\n");
    hash++;
    space--;
  }
   
   
  

    return 0;
}


