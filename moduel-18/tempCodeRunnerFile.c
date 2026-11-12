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