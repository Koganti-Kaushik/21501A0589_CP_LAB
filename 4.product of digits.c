#include<stdio.h>
void main()
{
    int n,pro=1,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        pro*=rem;
        n=n/10;
    }
    printf("%d",pro);
}
