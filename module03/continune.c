#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int i = 1;
    while(i <= a) {
        if(i == 5) {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }

  
   
    return 0;
}