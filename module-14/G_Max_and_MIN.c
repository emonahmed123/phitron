#include <stdio.h>


int minmax(int a[], int b) {
    int max = a[0];
    int min = a[0];

    for (int i = 1; i < b; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    printf(" %d", min);
    printf(" %d", max);
}

int main() {
 int n;
 scanf("%d", &n);
 int a[n];
 for (int i = 0; i < n; i++) {
     scanf("%d", &a[i]);}

    minmax(a, n);

    return 0;
}