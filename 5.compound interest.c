#include<stdio.h>
#include<math.h>
int main()
{
    float r,x,b,Amt;
    int p,t,m,y;
    printf("enter the principal amount:");
    scanf("%d",&p);
    printf("enter the time period:");
    scanf("%d",&t);
    printf("enter the rate of interest:");
    scanf("%f",&r);
    printf("enter number of times interest is calculated per year:");
    scanf("%d",&m);
    r=r/100;
    x=(1+(r*m));
    y=t*m;
    b=pow(x,y);
    Amt=p*b;
    printf("the final amount is %.2f",Amt);
}
