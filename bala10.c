#include <stdio.h>
void main()
{
    int rem,rev=0 ,a;
    printf("enter the value");
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    printf("%d",rev);
    }


