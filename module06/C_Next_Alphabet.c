#include <stdio.h>

int main() {
 
  char c;
  scanf("%c", &c);
  if( c >= 'z'|| c >= 'Z'){
      printf("%c\n", c-32);
    }
      else{
        printf("%c\n", c + 1);
      }

    return 0;
}