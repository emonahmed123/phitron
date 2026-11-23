#include <stdio.h>

int main() {
  int n;
   scanf("%d",&n);

   for (int i =0 ;i<n ;i++)
   {
    

    long long M, A, B, C;
    scanf("%lld %lld %lld %lld",&M, &A ,&B, &C);
    long long P= A*B*C;
    if(M%P==0){
      printf("%lld\n",M/P);
    }
    else{
      printf("-1 \n");
    }
   
   }
   

    return 0;
}