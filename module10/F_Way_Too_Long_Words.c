#include <stdio.h>

int main() {
  
  int n;
  scanf("%d",&n);
  char s[100001] ;
  for (int i = 0; i < n; i++)
  {
    scanf("%s",&s);
    printf("%s \n",s);
  }
    int sze = strlen(s);
  printf("%d",sze);
  

    return 0;
}