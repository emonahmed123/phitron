#include <stdio.h>
#include<string.h>

int is_palindrome(char s[]){

int len =strlen(s);

for(int i =0, j=len-1; i<j;i++,j--){

 if(s[i]!=s[j]){
   return 0;
 }


}


return 1;
}

int main() {
  
char s[10001];
scanf("%s", s);


 if( is_palindrome(s))printf("Palindrome");
 else printf("Not Palindrome");


    return 0;
}