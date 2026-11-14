#include <stdio.h>
#include <stdbool.h>
int main()
{
  int r, c;
  scanf("%d %d", &r, &c);
  int a[r][c];

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  int x;
  scanf("%d", &x);

  bool found =false;

  for (int i = 0; i < r; i++)
  {
    
      for (int j = 0; j < c; j++)
        if (a[i][j] == x)
        {

         

              found=true;
        }
        
      
        
    
  }

  if(found){
    printf("will not take number");
  }
  else{
    printf("will take number");
   
  }

  return 0;
}