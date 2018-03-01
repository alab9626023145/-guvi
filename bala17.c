#include <stdio.h>
void main()
{
	int k,fact=1;
	scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}
