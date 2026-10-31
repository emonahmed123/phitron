#include<stdio.h>

int main (){

int n;
scanf("%d", &n);
int a[n];

for (int i = 0; i < n; i++)
{
 scanf("%d",&a[i]);
 
};
int f=0;
int l =n-1;

while (f<l)
{
  int temp=a[f];

  a[f]=a[l];
  a[l]=temp;

  f++;
  l--;

}

for (int i = 0; i < n; i++)
{
 printf("%d ",a[i]);
 
};




  return 0;
}