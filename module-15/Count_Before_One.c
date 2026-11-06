#include <stdio.h>

int count_before_one(int a[],int n){


 for (int i = 0; i <n; i++)
 {
  
  if(a[i]==1){
  return
  }
 }
 
 return  before_one;
}
int main() {
    
  int n;

  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  int result= count_before_one(arr ,n);
   printf("%d",result);
  return 0;
}