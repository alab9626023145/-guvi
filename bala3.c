#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n enter the value");
    scanf("\n %d%d%d",&a,&b,&c);
    if(a>c && a>b)
    {
        printf("%d",a);
    }
    if(b>c && b>a)
    {
        printf("%d",b);
    }
    if(c>b && c>a)
    {
        printf("%d",c);
    }
} 
