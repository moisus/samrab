#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f(int *a, int n)
{
 int x,p=0;
 for (x=0;x<n-1;x++)
 {   
  if (a[x]*a[x+1]>0)
  p=p+1;
 }
 if (p==0)
 {
  for (x=0;x<n;x++)
  if (a[x]>0)
  p=p+a[x];
  else 
  {
   p=1;
   p=p*a[x];
  }
 } 
  return p;
}

int main()
{
int j;
int *array, k, b;
printf("введите размер массива ");
scanf("%d",&k);
array=(int*)malloc(sizeof(int)*k);
for (j=0;j<k;j++)
 {
 printf("введите %d элемент массива: ",j);
 scanf("%d",&array[j]);
 }
b=f(array,k);
printf("ответ: %d\n",b);
free(array);
return 0;
} 
 
 
 







