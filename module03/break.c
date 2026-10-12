#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int i = 1;
    while(i <= a) {
        if(i == 5) {
            break;
        }
        printf("%d\n", i);
    }

  
   
    return 0;
}