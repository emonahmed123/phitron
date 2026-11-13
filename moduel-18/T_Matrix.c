#include <stdio.h>

int main()
{
  int r;
  scanf("%d ", &r);
  int a[r][r];
  int mainsum=0;
  int secsum=0;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < r; j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < r; j++)
      if (i == j)
      {
        mainsum=mainsum+a[i][j];
      }
    
  }
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < r; j++)
      if (i + j ==r-1)
      {
        secsum = secsum + a[i][j];
      }
    
  }

  printf("%d", (secsum - mainsum));

  return 0;
}