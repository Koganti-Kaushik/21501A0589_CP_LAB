#include<stdio.h>
int fact(int);
int main()
{
    int n,temp,sum=0,rem;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+fact(rem);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("%d is strong",temp);
    }
    else{
        printf("%d is not strong",temp);
    }
    return 0;

}
int fact(int rem)
{
    if(rem==0 || rem==1)
        return 1;
    else
        return rem*fact(rem-1);
}
