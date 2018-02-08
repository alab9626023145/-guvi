#include <stdio.h>
void main()
{
    long  n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%ld", &n);
    while(n != 0)
    {
        n /= 10;
        ++count;
    }
}
