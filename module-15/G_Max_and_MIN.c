#include <stdio.h>
#include <limits.h>
int fun(int a[], int n) {
  int max = INT_MIN;
  int min = INT_MAX;

  for (int i = 1; i <= n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
    if (a[i] < min) {
      min = a[i];
    }
  }

  printf("%d %d\n", min, max);
}
int main() {
 int n;
  scanf("%d", &n);
 int a[n];

  for (int i = 1; i <= n; i++) {
  scanf("%d", &a[i]);
  }
   
  fun(a,n);

    return 0;
}