#include<stdio.h>
int main()
{
int a[100],n,m,size;
printf("\n enter the size of the array:");
scanf("%d",&size);
for(n=0;n<size;n++)
{
scanf("%d",&a[n]);
}
m=size/2;
printf("\n the middle element is %d",a[m]);
}
