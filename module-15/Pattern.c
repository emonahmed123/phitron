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
  

      if(i%2==1)    printf("#");
      else          printf("-");
    }
   

  
    
       printf("\n");
    hash+=2;
    space--;
  }
   
     space=1;
     hash=2*n-3;
 
   
  for(int i=n-1; i>=1; i--){

    for(int j=1; j<=space; j++){
      printf(" ");
    }

    for(int j=1; j<=hash; j++){
      if(i%2==1)    printf("#");
      else          printf("-");
    }
  
       printf("\n");
     hash-=2;
     space+=1;
  }
    
  

    return 0;
}


