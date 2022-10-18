#include<stdio.h>
void main()
{
    int n,sum=0,temp,rem;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(sum==temp)
        printf("palindrome number");
    else
        printf("not a palindrome");
}
