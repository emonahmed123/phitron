#include <stdio.h>

int main()
{
  int r, c;
  scanf("%d %d", &r, &c);
  int a[r][c];

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; i < c; j++)
    {
      scanf("%d", a[r][c]);
    }
  }
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; i < c; j++)
    {
      printf("%d", a[r][c]);
    }
    
  }

  return 0;
}