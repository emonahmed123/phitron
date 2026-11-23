#include <stdio.h>

// int main() {
//  int a, b;
//  scanf("%d %d",&a, &b);
  
//  int sum;
//  sum=a+b;
//  printf("%d", sum);

//     return 0;
// }

int main(){
// int a,b,c,d;

// scanf("%d %d %d %d",&a,&b,&c,&d);

// if (a>b && a>c && a>d)
// {
//   printf("Rahim");
// }
// else if (b > a && b > c && b > d)
// {
//  printf("karim");

// }
// else if (c > a && c > b && c > d)
// {
//   printf("Sakib");
// }
// else if (d > a && d > b && d> c)

// {
//   printf("Nabil");
// }
// else{
//   printf("Tie");
// }

//   int n,m,k;

//   scanf("%d %d %d", &n,&m,&k);

//   int a[n];

//   for (int i = 0; i < n-1; i++)
//   {
//     scanf("%d",&a[i]);
//   }
  
//   int sum=0;
//   for (int i = 0; i < n-1; i++)
//   {
//     sum+=a[i];
//   }
 
//   int ave=n*k-sum;
  

//  if(ave<0){
//      ave=0;
//  }
//  if (ave > m)
//  {
//    printf("-1");
//  }
//  else{
//    printf("%d",ave);
//  }



  int n;

  scanf("%d", &n);

  int a[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  int ans =0;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] > a[i] )
      {
        ans =  a[j];
        break;
      }
      else{
        
      }
    }
  }

  printf("%d", ans);

  return 0;

}