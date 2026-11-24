#include<bits/stdc++.h>
using namespace std;


int main(){

 int *a=new int[5];
  for (int i = 0; i <5 ; i++)
  {
    cin>> a[i];
  }

int *b =new int[7];
for (int  i = 0; i < 7; i++){
  b[i]=a[i];
}

b[5]=40;
b[6]=50;


for (int i = 0; i <7 ; i++)
  {
    cout<< b[i] <<" ";
  }

return 0;
  
}