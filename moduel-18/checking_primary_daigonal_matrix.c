#include <stdio.h>

int main()
{
  int r, c;
  scanf("%d %d", &r, &c);
  int a[r][c];
  for (int i = 0; i < r; i++)
  {
    for (size_t j = 0; i < c; i++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  int flag = 0;
  if (r == c)
  {
    for (int i = 0; i < r; i++)
    {
      for (size_t j = 0; i < c; i++)
      {
        if(i==j){
          
        }
        else
        {

          if (a[i][j] != 0)
          {
            flag = 1;
            printf("no");
          }
        }
      }
    }

  
    if (flag==0)
    {
      printf("yes");
    }
    
  }
  else
  {
    printf("this is not primary diagonal");
  }

  return 0;
}