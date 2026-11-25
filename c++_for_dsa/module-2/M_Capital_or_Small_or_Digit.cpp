#include<bits/stdc++.h>
using namespace std;

int main(){
 char s;

 cin >> s;

 if((int)s>=48 && (int)s<=57){
  cout << "IS DIGIT";
 }
else if((int)s>=65 &&(int)s<=90){
  cout << "ALPHA" <<endl << "IS CAPITAL";
 }
else if((int)s>=97 &&(int)s<=122){
  cout << "ALPHA" <<endl << "IS SMALL";
 }

return 0;
  
}