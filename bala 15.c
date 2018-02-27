#include<stdio.h>
void main()
{
    inta,b, remainder, r= 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &n);
    a=b;
    while (b!=0)
    {
        rem = b%10;
        r+= rem*rem*rem;
        b/= 10;
    }
    if(r==a)
        printf("%d is an Armstrong number.",a);
    else
        printf("%d is not an Armstrong number.",b);
    
}


