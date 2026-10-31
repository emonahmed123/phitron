#include <stdio.h>
#include <string.h>
int main() {
  
  int n;
  scanf("%d",&n);

  for (int i = 0; i < n; i++)
  {
    char s[105] ;
    scanf("%s",&s);
       int sze = strlen(s);
  // printf("%d",sze);
   if(sze>=10){
  
     printf("%c%d%c\n",s[0],sze-2,s[sze-1]);

   }
   else{
    printf("%s \n",s);
   }

  
  }
 
  

    return 0;
}