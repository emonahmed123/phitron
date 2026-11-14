#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int a[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  for (int i = 0, j = n - 1; i <= j; i++, j--)
  {

    if (i == j)
    {
      printf("%d ", a[i]);
    }
    else
    {
      printf("%d %d ", a[i], a[j]);
    }
  }

  return 0;
}