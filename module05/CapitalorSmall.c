#include <stdio.h>

int main() {
    char b;

    scanf("%c", &b);

    if (b >= 'A' && b <= 'Z') {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    } else if (b >= 'a' && b <= 'z') {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    } else {
        printf("IS DIGIT\n");
    }

    return 0;
}