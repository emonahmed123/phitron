#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long x;
    while(scanf("%lld", &x) == 1) {
         long long factorial = 1;
        for(int i = 2; i <= x; ++i) {
            factorial *= i;
        }
        printf("%lld\n", factorial);
    }

    return 0;
}