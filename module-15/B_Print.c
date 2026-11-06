#include <stdio.h>

void printNumbers(int n) {
    if (n == 0) return;
    printNumbers(n - 1);      // age 1 theke n-1 print hobe
    if (n > 1) printf(" ");   // 1 er age space na
    printf("%d", n);
}

int main() {
    int n;
    scanf("%d", &n);
    printNumbers(n);
    printf("\n");
    return 0;
}