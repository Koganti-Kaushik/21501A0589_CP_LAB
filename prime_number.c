#include<stdio.h>
int main()
{
    int n,count=0,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count==1)
        printf("prime number");
     else
        printf("not prime");
     return 0;
}
