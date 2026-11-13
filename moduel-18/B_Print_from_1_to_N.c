#include <stdio.h>
 void oneToN(int i, int n){

   if(i>n){
    return;
   };
   printf("%d\n", i);
   oneToN(i + 1, n);
 
 }

int main() {
     int n;
     int i=1;
     scanf("%d",&n);
  oneToN(i,n);

    return 0;
}