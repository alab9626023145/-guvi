#include<stdio.h>
int main()
{
int a[50],n,i,m;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
m=a[0];
for(i=1;i<n;i++)
{
if(m>a[i])
m=a[i];
}
printf("the minimum value is %d",m);
}
