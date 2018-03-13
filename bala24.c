#include<stdio.h>
int main()
{
int a[100],b,c,n=4,m=2,temp;
for(b=0;b<n;b++)
{
scanf("%d",&a[b]);
printf("%d",b);
}
for(c=0;c<m;c++)
if(a[b]<a[c])
{
temp=a[b];
a[b]=a[c];
a[c]=temp;
}
printf("%d",a[b]);
}
