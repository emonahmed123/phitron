  #include <stdio.h>
  #include <stdbool.h>
  int main()
  {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }

    int ans = 1000000;
    for (int i = 0; i < n; i++)
    {
      int count = 0;
      for (int j = a[i]; j % 2 == 0; j = j / 2)
      {
        count++;
      }
      if (count < ans)
      {
        ans = count;
      }
    }

    printf("%d", ans);
    return 0;
  }