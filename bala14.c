#include<stdio.h>
void main()
{
     int n, i, j, a,b , flag=0;
    printf("\n Enter two numbers(Intervals) : ");
    scanf("%d%d",&a,&b);
    printf("\n The prime numbers between %d and %d are :",a,b);
    for(i=a+1;i<b;i++)
    {
        flag=0;
        for(j=2;j<=sqrt(i);j++)      
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
                 if (flag==0)
        {
            printf(" %d ",i);
        }
    }
 
}

