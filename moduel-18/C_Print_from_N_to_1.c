#include <stdio.h>
void oneToN(int i, int n)
{

  if (i == 1)
  {
    return;
  };
  printf("%d ", i);
  oneToN(i - 1, n);
  
}

int main()
{
  int n;
 
  scanf("%d", &n);
  int i = n;
  oneToN(i, n);
  printf("%d", 1);

  return 0;
}