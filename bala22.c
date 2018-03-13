#include<stdio.h>
void main()
{
	int i,b[100],n,temp=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n-i-1;j++)
	{
	if(b[j]>b[j+1])
	{
    temp=b[j];
	b[j]=b[j+1];
	b[j+1]=temp;
	}
}
}
	for(i=0;i<n;i++)
	{
	printf("%d\n",b[i]);
	}
}
