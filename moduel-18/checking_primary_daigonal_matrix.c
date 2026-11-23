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

  if (r != c)
  {
    printf("NO\n");
    return;
  }
  int flag = 1;
  if (r == c)
  {
    for (int i = 0; i < r; i++)
    {
      for (size_t j = 0; i < c; i++)
      {
        if (i== j ||i+j==r-1)
        {
          if(a[i][j] !=1) flag=0;
        }
        else
        {

          if (a[i][j] != 0)
          {
            flag = 0;
            printf("no");
          }
        }
      }
    }

    if (flag == 1)
    {
      printf("YES\n");
    }
  }
  else
  {
    printf("NO\n");
  }

  return 0;
}