#include<stdio.h>
int main()
{
    int yrs,wks,days,n;
    printf("enter the number of days:");
    scanf("%d",&n);
    yrs=n/365;
    wks=(n%365)/7;
    days=(n%365)%7;
    printf("%d days= %d years, %d weeks, %d days",n,yrs,wks,days);
    return 0;
}

