#include<stdio.h>
int main()
{
    int n,i,j,count=0,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==1)
        {
            printf("%d ",i);
            sum=sum+j;
        }
        count=0;
    }
    printf("\nsum of primes between 1 and %d is = %d",n,sum);
    return 0;
}
