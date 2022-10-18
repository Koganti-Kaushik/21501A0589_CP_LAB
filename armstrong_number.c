#include<stdio.h>
int main()
{
    int n,temp,rem,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(sum==temp)
    {
        printf("%d is armstrong",temp);
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
}
