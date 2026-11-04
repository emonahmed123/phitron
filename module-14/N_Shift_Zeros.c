#include <stdio.h>

int main() {
 int n;
 scanf("%d", &n);
 int a[n];
 for (int i = 0; i < n; i++) {
     scanf("%d", &a[i]); 
 }
 
 for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
          if (a[i] == 0 && a[j] != 0) {
            
               int temp = a[j];
               a[j] = a[i];
               a[i] = temp;
          }
      }
        
     }

     for (int j = 0; j < n; j++) {
         printf("%d ", a[j]);
     }
    return 0;
}