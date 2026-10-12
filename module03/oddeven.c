#include<stdio.h>

int main() {
    int a;
   
    scanf("%d", &a);
   for(int i = 1; i <= a; i++) {
        if(i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }

    return 0;
}