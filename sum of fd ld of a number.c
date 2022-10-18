#include<stdio.h>
int main()
{
    int n,rem,ld,fd;
    scanf("%d",&n);
    ld=n%10;
    while(n>=1)
    {
        rem=n%10;
        n=n/10;
    }
    fd=rem;
    int sum=fd+ld;
    printf("%d",sum);
    return 0;
}
